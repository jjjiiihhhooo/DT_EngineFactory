#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EngineParts.generated.h"

class USplineComponent;
class UBoxComponent;

UCLASS()
class ENGINEFACTORY_API AEngineParts : public AActor
{
	GENERATED_BODY()
	
public:	
	AEngineParts();

public:	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	void InitSpline();

public:
	void Move(float DeltaTime);

	void SetPositionOnSpline();

public:
	UFUNCTION(BlueprintCallable, Category = "Movement")
	float GetMoveSpeed() const { return Speed; }

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void SetMoveSpeed(float MoveSpeed) { Speed = MoveSpeed; }

	float Speed;

public:
	UFUNCTION(BlueprintCallable, Category = "Movement")
	float GetCurDistance() const { return CurrentDistance; }

	float CurrentDistance;

public:
	UFUNCTION(BlueprintCallable, Category = "Movement")
	bool CanMove() const { return bCanMove; }

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void SetCanMove(bool CanMove) { bCanMove = CanMove; }

	bool bCanMove;

public:
	UFUNCTION(BlueprintCallable, Category = "Physics")
	void Detach();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	UBoxComponent* CheckBox;
public:

	UFUNCTION(BlueprintCallable)
	void SetSplineActor(AActor* Actor);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	AActor* SplineActor;

	UPROPERTY()
	USplineComponent* Spline;
};
