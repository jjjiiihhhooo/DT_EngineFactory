#include "Machine.h"
#include "EngineParts.h"

AMachine::AMachine()
{
	PrimaryActorTick.bCanEverTick = true;
	TestTime = 3.0f;
}

void AMachine::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMachine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bAction)
	{
		Action(DeltaTime);
	}
}

void AMachine::Action(float DeltaTime)
{
	if (TestTime > 0)
	{
		UE_LOG(LogTemp, Log, TEXT("%f"), TestTime);
		TestTime -= DeltaTime;
	}
	else
	{
		Parts->Tags.Remove(TagName);
		Parts->Tags.Add(NextTagName);
		Parts->SetCanMove(true);
		bAction = false;
	}
}

void AMachine::ActionReady(AEngineParts* Engine)
{
	Parts = Engine;
	bAction = true;
}
