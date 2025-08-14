#include "CheckTrigger.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Actor.h"
#include "EngineParts.h"
#include "Machine.h"

UCheckTrigger::UCheckTrigger()
{
	PrimaryComponentTick.bCanEverTick = true;

	TraceDistance = 1000.0f;
	TraceStartOffset = FVector::ZeroVector;
	DebugTraceColor = FLinearColor::Blue;
	TraceChannel = ECC_Visibility;
	LastHitActor = nullptr;
}

void UCheckTrigger::BeginPlay()
{
	Super::BeginPlay();

}

void UCheckTrigger::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	FHitResult HitResult;

	if (LineTrace(HitResult))
	{
		TraceResult(HitResult);
	}
	else
	{
		if (LastHitActor)
		{
			LastHitActor = nullptr;
		}
	}

}

bool UCheckTrigger::LineTrace(FHitResult& HitResult)
{
	AActor* Owner = GetOwner();

	//회전값을 고려해서 시작점 위치 지정
	FVector StartLocation = Owner->GetActorLocation() + Owner->GetActorRotation().RotateVector(TraceStartOffset);
	//RotateVector는 로컬 좌표를 회전값에 맞춰서 월드 좌표로 변환
	
	FVector EndLocation = StartLocation + Owner->GetActorForwardVector() * TraceDistance;

	TArray<AActor*> ActorsIgnore;
	ActorsIgnore.Add(Owner); //자신은 무시
	
	bool bHit = GetWorld()->LineTraceSingleByChannel(
		HitResult,
		StartLocation,
		EndLocation,
		TraceChannel,
		FCollisionQueryParams(FName(TEXT("Trace")), true, Owner),
		FCollisionResponseParams::DefaultResponseParam
	);

	if (bDebugTrace)
	{
		FVector DrawStart = StartLocation;
		FVector DrawEnd = bHit ? HitResult.ImpactPoint : EndLocation;

		FLinearColor CurColor = bHit ? FLinearColor::Green : DebugTraceColor;

		DrawDebugLine(
			GetWorld(),
			DrawStart,
			DrawEnd,
			CurColor.ToFColor(true),
			false,
			-1.0f,
			0,
			1.0f
		);
	}

	return bHit;

}

void UCheckTrigger::TraceResult(const FHitResult& HitResult)
{
	AActor* HitActor = HitResult.GetActor();

	if (!HitActor)
	{
		return;
	}

	if (HitActor != LastHitActor)
	{
		UE_LOG(LogTemp, Log, TEXT("%s : Hit new Actor -> %s"), *GetName(), *HitActor->GetName());

		AEngineParts* Parts = Cast<AEngineParts>(HitActor);
		
		if (Parts)
		{
			Parts->SetCanMove(false);

			if (Machine)
			{
				Machine->ActionReady(Parts);
			}
		}

		LastHitActor = HitActor;
	}
}
