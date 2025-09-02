#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FactoryGameMode.generated.h"

class ACameraActor;

UCLASS()
class ENGINEFACTORY_API AFactoryGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AFactoryGameMode();
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, Category = "Camera")
	void ChangeCamera(int32 CameraIndex);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	TArray<ACameraActor*> Cameras;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float CameraBlendTime = 0.1f;
};
