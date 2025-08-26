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
	void ActionReady(AEngineParts* Engine);

	bool ActionDelay(float DeltaTime);
	
	virtual void Action(float DeltaTime);

	void ActionExit();

	UFUNCTION(BlueprintCallable, Category = "Action")
	float TimeRate() { return ActionTime / CurActionTime; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action")
	AEngineParts* Parts;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action")
	bool bAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action")
	float ActionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action")
	float CurActionTime;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trigger")
	FName TagName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trigger")
	FName NextTagName;

};
