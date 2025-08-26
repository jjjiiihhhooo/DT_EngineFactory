#include "RobotArm.h"
#include "Components\SceneComponent.h"

void ARobotArm::Action(float DeltaTime)
{
	UE_LOG(LogTemp, Warning, TEXT("RobotArm Action"));
	if (Index < TargetPos.Num())
	{
		FVector Pos;
		Pos = Point->GetRelativeLocation();

		if (FVector::Distance(TargetPos[Index], Pos) > 0.1f)
		{
			Pos = FMath::VInterpConstantTo(Pos, TargetPos[Index], DeltaTime, MoveSpeed);
			Point->SetRelativeLocation(Pos);
		}
		else
		{
			Index++;
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Action Robot Arm Exit"));
		ActionExit();
		Index = 0;
	}
}