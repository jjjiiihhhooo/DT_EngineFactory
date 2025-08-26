#pragma once

#include "CoreMinimal.h"
#include "Machine.h"
#include "RobotArm.generated.h"

class USceneComponent;

UCLASS()
class ENGINEFACTORY_API ARobotArm : public AMachine
{
	GENERATED_BODY()

public:
	void Action(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action")
	USceneComponent* Point;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action")
	TArray<FVector> TargetPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action")
	float MoveSpeed;

private:
	int32 Index;
};
