#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Machine.generated.h"

class AEngineParts;

UCLASS()
class ENGINEFACTORY_API AMachine : public AActor
{
	GENERATED_BODY()
	
public:	
	AMachine();

public:	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	void Action(float DeltaTime);

	void ActionReady(AEngineParts* Engine);

	AEngineParts* Parts;
	bool bAction;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trigger")
	FName TagName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trigger")
	FName NextTagName;

private:
	float TestTime;
};
