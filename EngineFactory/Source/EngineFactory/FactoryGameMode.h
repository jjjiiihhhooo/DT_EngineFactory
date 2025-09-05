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
};
