#include "EngineParts.h"
#include "Components/SplineComponent.h"
#include "Components/BoxComponent.h"

AEngineParts::AEngineParts()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AEngineParts::BeginPlay()
{
	Super::BeginPlay();

	CurrentDistance = 0.0f;
	InitSpline();
}

void AEngineParts::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CanMove())
	{
		if (!Spline)
		{
			InitSpline();

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

void AEngineParts::Detach()
{
	if (GetAttachParentActor() != nullptr)
	{
		DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

		if (CheckBox != nullptr)
		{
			CheckBox->SetSimulatePhysics(true);
			CheckBox->SetPhysicsLinearVelocity(FVector::ZeroVector);
			CheckBox->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
		}
	}
}

void AEngineParts::SetSplineActor(AActor* Actor)
{
	if (Actor == nullptr)
	{
		SplineActor = nullptr;
		Spline = nullptr;
		return;
	}

	SplineActor = Actor;

	Spline = SplineActor->FindComponentByClass<USplineComponent>();
	CurrentDistance = 0.0f;
}