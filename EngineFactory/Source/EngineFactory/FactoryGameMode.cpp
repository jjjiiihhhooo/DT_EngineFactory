#include "FactoryGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "GameFramework/PlayerController.h"

AFactoryGameMode::AFactoryGameMode()
{
	PlayerControllerClass = APlayerController::StaticClass();
}

void AFactoryGameMode::BeginPlay()
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

	UE_LOG(LogTemp, Warning, TEXT("%d개 카메라"), Cameras.Num());

	ChangeCamera(0);

	CameraBlendTime = 0.5f;
}

void AFactoryGameMode::ChangeCamera(int32 CameraIndex)
{
	if (Cameras.IsValidIndex(CameraIndex) && Cameras[CameraIndex] != nullptr)
	{
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		
		if (PlayerController)
		{
			PlayerController->SetViewTargetWithBlend(Cameras[CameraIndex], CameraBlendTime);

			UE_LOG(LogTemp, Warning, TEXT("카메라 전환 : [%d]"), CameraIndex);
		}
	}
}