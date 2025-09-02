#include "CheckTrigger.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
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

	RayThickness = 3.0f;
	RayMeshComp = nullptr;
}

void UCheckTrigger::BeginPlay()
{
	Super::BeginPlay();

}

void UCheckTrigger::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	AActor* Owner = GetOwner();

	FHitResult HitResult;

	FVector StartLocation = Owner->GetActorLocation() + Owner->GetActorRotation().RotateVector(TraceStartOffset);
	FVector EndLocation = StartLocation + Owner->GetActorForwardVector() * TraceDistance;

	bool bHit = LineTrace(HitResult);

	if (bHit)
	{
		TraceResult(HitResult);
		EndLocation = HitResult.ImpactPoint;
	}
	else
	{
		if (LastHitActor)
		{
			LastHitActor = nullptr;
		}
	}

	ActivateRayMesh(StartLocation, EndLocation);

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

	if (HitActor != LastHitActor)
	{
		AEngineParts* Parts = Cast<AEngineParts>(HitActor);
		
		if (Parts)
		{
			if (Machine)
			{
				FName HitTag = Parts->Tags[0];
				FName MachineTag = Machine->TagName;

				if (HitTag == MachineTag)
				{
					Machine->ActionReady(Parts);
					Parts->SetMoveSpeed(200);
				}
			}
		}

		LastHitActor = HitActor;
	}
}

void UCheckTrigger::ActivateRayMesh(const FVector& StartLocation, const FVector& EndLocation)
{
	if (!RayMeshComp)
	{
		AActor* Owner = GetOwner();

		RayMeshComp = NewObject<UStaticMeshComponent>(Owner);
		RayMeshComp->SetStaticMesh(RayMesh);
		RayMeshComp->SetMaterial(0, RayMat);
		RayMeshComp->SetupAttachment(Owner->GetRootComponent());
		RayMeshComp->RegisterComponent(); //렌더링 하려면 등록
	}
	else
	{
		RayMeshComp->SetVisibility(true);

		float Length = FVector::Dist(StartLocation, EndLocation);
		if (Length < 1.0f)
		{
			RayMeshComp->SetVisibility(false);
			return;
		}

		FVector CenterLocation = (StartLocation + EndLocation) * 0.5f;
		FRotator LookAtRotation = (EndLocation - StartLocation).Rotation();
		FVector Scale = FVector(Length / 100.0f, RayThickness / 50.f, RayThickness / 50.0f);

		RayMeshComp->SetWorldLocationAndRotation(CenterLocation, LookAtRotation);
		RayMeshComp->SetWorldScale3D(Scale);
	}
}
