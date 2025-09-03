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
		for (int32 j = 0; j < 10; j++)
		{
			CreateParts(i);
		}

		UE_LOG(LogTemp, Warning, TEXT("%d번째 인덱스 초기화 완료"), i);
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
	Parts->SetActorHiddenInGame(true);
	Parts->SetActorEnableCollision(false);
	Parts->SetActorTickEnabled(false);
	Parts->SetActorTransform(GetTransform());

	PartsQueuePool[Index].Enqueue(Parts);
}

AEngineParts* ASpawner::GetPartsByIndex(int32 Index)
{
	if (Index >= PoolSize)
	{
		UE_LOG(LogTemp, Error, TEXT("접근할 수 없는 인덱스입니다. Index %d >= Pool Size %d"), Index, PoolSize);
		return nullptr;
	}

	if (PartsQueuePool[Index].IsEmpty())
	{
		CreateParts(Index);
	}

	AEngineParts* Parts;

	PartsQueuePool[Index].Dequeue(Parts);

	Parts->SetActorHiddenInGame(false);
	Parts->SetActorEnableCollision(true);
	Parts->SetActorTickEnabled(true);


	UE_LOG(LogTemp, Warning, TEXT("GetByIndex"));
	return Parts;
}

void ASpawner::ReturnParts(AEngineParts* Parts, int32 Index)
{
	UE_LOG(LogTemp, Warning, TEXT("Return"));
	PartsEnqueue(Parts, Index);
}

