#include "FactoryGameMode.h"
#include "GameFramework/PlayerController.h"

AFactoryGameMode::AFactoryGameMode()
{
	PlayerControllerClass = APlayerController::StaticClass();
}

void AFactoryGameMode::BeginPlay()
{
	Super::BeginPlay();
}
