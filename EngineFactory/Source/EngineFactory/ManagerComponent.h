#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ManagerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ENGINEFACTORY_API UManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UManagerComponent();
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UFUNCTION(BlueprintCallable, Category = "Count")
	void AddCountByIndex(int32 Index);

	UFUNCTION(BlueprintCallable, Category = "Count")
	int32 GetCountByIndex(int32 Index);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Count")
	TArray<int32> CountArray;
};
