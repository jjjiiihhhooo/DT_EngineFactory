#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Manager.generated.h"

UCLASS()
class ENGINEFACTORY_API AManager : public AActor
{
	GENERATED_BODY()
	
public:	
	AManager();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable, Category = "Count")
	void AddCountByIndex(int32 Index);

	UFUNCTION(BlueprintCallable, Category = "Count")
	int32 GetCountByIndex(int32 Index);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Count")
	TArray<int32> CountArray;

public:
	UFUNCTION(BlueprintCallable, Category = "Camera")
	void ChangeCamera(int32 CameraIndex);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	TArray<ACameraActor*> Cameras;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float CameraBlendTime = 0.1f;
};
