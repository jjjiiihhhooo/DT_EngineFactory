#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Containers/Queue.h"
#include "Spawner.generated.h"

class AEngineParts;

UCLASS()
class ENGINEFACTORY_API ASpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpawner();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	void InitPool();
	
	void CreateParts(int32 Index);
	void PartsEnqueue(AEngineParts* Parts, int32 Index);

	int32 PoolSize;
	
	//GC가 추적할 수 있는 용도로 사용
	UPROPERTY()
	TSet<AEngineParts*> AllPooledParts;

public:
	UFUNCTION(BlueprintCallable, Category = "Pool")
	AEngineParts* GetPartsByIndex(int32 Index);

	UFUNCTION(BlueprintCallable, Category = "Pool")
	void ReturnParts(AEngineParts* Parts, int32 Index);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pool")
	TArray<TSubclassOf<AEngineParts>> PartsClassArray;

	TArray<TQueue<AEngineParts*>> PartsQueuePool;
};
