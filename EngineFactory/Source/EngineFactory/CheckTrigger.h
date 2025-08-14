#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CheckTrigger.generated.h"

class AMachine;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ENGINEFACTORY_API UCheckTrigger : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCheckTrigger();

public:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	bool LineTrace(FHitResult& HitResult);

	void TraceResult(const FHitResult& HitResult);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trigger")
	float TraceDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trigger")
	FVector TraceStartOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trigger")
	bool bDebugTrace; //디버그 트레이스 그릴지

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trigger")
	FLinearColor DebugTraceColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trigger")
	TEnumAsByte<ECollisionChannel> TraceChannel; // ECC_Visibility, ECC_WorldStatic

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AMachine* Machine;

private:
	AActor* LastHitActor;
};
