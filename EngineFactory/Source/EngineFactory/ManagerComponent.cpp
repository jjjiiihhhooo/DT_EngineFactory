#include "ManagerComponent.h"

UManagerComponent::UManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UManagerComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UManagerComponent::AddCountByIndex(int32 Index)
{
	CountArray[Index]++;
	UE_LOG(LogTemp, Warning, TEXT("(ADD) Count[%d] = %d"), Index, CountArray[Index]);
}

int32 UManagerComponent::GetCountByIndex(int32 Index)
{
	UE_LOG(LogTemp, Warning, TEXT("(GET) Count[%d] = %d"), Index, CountArray[Index]);
	return CountArray[Index];
}
