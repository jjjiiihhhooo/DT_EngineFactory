#include "RobotArm.h"
#include "EngineParts.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"

void ARobotArm::Action(float DeltaTime)
{
	if (Index < TargetPos.Num())
	{
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

			Index++;
		}
	}
	else
	{
		ActionExit();
		Index = 0;
	}
}