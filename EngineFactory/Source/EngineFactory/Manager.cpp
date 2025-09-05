#include "Manager.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

AManager::AManager()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AManager::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), FoundActors);

	for (AActor* Actor : FoundActors)
	{
		ACameraActor* Camera = Cast<ACameraActor>(Actor);

		if (Camera)
		{
			Cameras.Add(Camera);
		}
	}

	ChangeCamera(0);

	CameraBlendTime = 0.5f;
}

void AManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AManager::AddCountByIndex(int32 Index)
{
	CountArray[Index]++;
}

int32 AManager::GetCountByIndex(int32 Index)
{
	return CountArray[Index];
}

void AManager::ChangeCamera(int32 CameraIndex)
{
	if (Cameras.IsValidIndex(CameraIndex) && Cameras[CameraIndex] != nullptr)
	{
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

		if (PlayerController)
		{
			PlayerController->SetViewTargetWithBlend(Cameras[CameraIndex], CameraBlendTime);
		}
	}
}