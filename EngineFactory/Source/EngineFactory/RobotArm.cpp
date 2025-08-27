#include "RobotArm.h"
#include "EngineParts.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"

void ARobotArm::Action(float DeltaTime)
{
	//UE_LOG(LogTemp, Warning, TEXT("RobotArm Action"));
	if (Index < TargetPos.Num())
	{
		FVector DrawPos = GetActorTransform().TransformPosition(TargetPos[Index]);
		DrawDebugSphere(GetWorld(), DrawPos, 20.0f, 16, FColor::Red, false, 0.0f);

		FVector Pos;
		Pos = Point->GetRelativeLocation();

		if (Index == 0)
		{
			TargetPos[Index] = GetActorTransform().InverseTransformPosition(Parts->GetActorLocation());
		}

		if (FVector::Distance(TargetPos[Index], Pos) > 3.0f)
		{
			Pos = FMath::VInterpConstantTo(Pos, TargetPos[Index], DeltaTime, MoveSpeed);
			Point->SetRelativeLocation(Pos);
		}
		else
		{
			if (Index == 0)
			{
				Parts->SetCanMove(false);
				Parts->AttachToComponent(Point, FAttachmentTransformRules::SnapToTargetIncludingScale, NAME_None);
			}
			else
			{
				if (Parts->GetAttachParentActor() != nullptr)
				{
					UE_LOG(LogTemp, Display, TEXT("Parts Detach"));
					Parts->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
					
					if (Parts->CheckBox != nullptr)
					{
						Parts->CheckBox->SetSimulatePhysics(true);
						Parts->CheckBox->SetPhysicsLinearVelocity(FVector::ZeroVector);
						Parts->CheckBox->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
					}
				}
			}

			Index++;
		}

	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("Action Robot Arm Exit"));
		ActionExit();
		Index = 0;
	}
}