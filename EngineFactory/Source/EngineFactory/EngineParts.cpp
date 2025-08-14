#include "EngineParts.h"
#include "Components/SplineComponent.h"
#include "Components/BoxComponent.h"

AEngineParts::AEngineParts()
{
	PrimaryActorTick.bCanEverTick = true;

	CurrentDistance = 0.0f;
}

void AEngineParts::BeginPlay()
{
	Super::BeginPlay();
	
	InitSpline();
}

void AEngineParts::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CanMove())
	{
		if (!Spline)
		{
			return;
		}

		Move(DeltaTime);
		SetPositionOnSpline();
	}
}

void AEngineParts::InitSpline()
{
	if (SplineActor)
	{
		Spline = SplineActor->FindComponentByClass<USplineComponent>();

		if (!Spline)
		{
			UE_LOG(LogTemp, Warning, TEXT("could not found Spline..."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("has no Spline Actor..."));
	}
}

void AEngineParts::Move(float DeltaTime)
{
	float SplineLength = Spline->GetSplineLength();

	CurrentDistance += Speed * DeltaTime;

	if (CurrentDistance > SplineLength) //끝에 도달했는지
	{
		CurrentDistance = SplineLength;
		bCanMove = false;
	}

}

void AEngineParts::SetPositionOnSpline()
{
	FVector WorldLocation = Spline->GetLocationAtDistanceAlongSpline(CurrentDistance, ESplineCoordinateSpace::World);
	FRotator WorldRotation = Spline->GetRotationAtDistanceAlongSpline(CurrentDistance, ESplineCoordinateSpace::World);

	SetActorLocationAndRotation(WorldLocation, WorldRotation);
}
