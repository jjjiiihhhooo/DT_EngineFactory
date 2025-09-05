#include "Spawner.h"
#include "EngineParts.h"

ASpawner::ASpawner()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASpawner::BeginPlay()
{
	Super::BeginPlay();

	InitPool();
}

void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASpawner::InitPool()
{
	PoolSize = PartsClassArray.Num();
	PartsQueuePool.SetNum(PoolSize);

	for (int32 i = 0; i < PoolSize; i++)
	{
		for (int32 j = 0; j < 3; j++)
		{
			CreateParts(i);
		}
	}
}

void ASpawner::CreateParts(int32 Index)
{
	AEngineParts* Parts = GetWorld()->SpawnActor<AEngineParts>(PartsClassArray[Index], FVector::ZeroVector, FRotator::ZeroRotator);
	
	AllPooledParts.Add(Parts);
	PartsEnqueue(Parts, Index);
}

void ASpawner::PartsEnqueue(AEngineParts* Parts, int32 Index)
{
	Parts->SetCanMove(false);
	Parts->SetSplineActor(nullptr);
	Parts->SetActorHiddenInGame(true);
	Parts->SetActorEnableCollision(false);
	Parts->SetActorTickEnabled(false);
	Parts->SetActorTransform(GetTransform());
	Parts->CurrentDistance = 0;

	PartsQueuePool[Index].Enqueue(Parts);
}

AEngineParts* ASpawner::GetPartsByIndex(int32 Index)
{
	if (Index >= PoolSize)
	{
		return nullptr;
	}

	if (PartsQueuePool[Index].IsEmpty())
	{
		CreateParts(Index);
	}

	AEngineParts* Parts;

	PartsQueuePool[Index].Dequeue(Parts);
	Parts->SetActorTransform(GetTransform());
	Parts->SetActorHiddenInGame(false);
	Parts->SetActorEnableCollision(true);
	Parts->SetActorTickEnabled(true);

	return Parts;
}

void ASpawner::ReturnParts(AEngineParts* Parts, int32 Index)
{
	PartsEnqueue(Parts, Index);
}

