#include "Machine.h"
#include "EngineParts.h"

AMachine::AMachine()
{
	PrimaryActorTick.bCanEverTick = true;
	bAction = false;
	ActionTime = 3.0f;
	CurActionTime = 0.0001f;
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

void AMachine::ActionReady(AEngineParts* Engine)
{
	Parts = Engine;
	bAction = true;

	StateChange(1);
}

bool AMachine::ActionDelay(float DeltaTime)
{
	if (CurActionTime < ActionTime)
	{
		CurActionTime += DeltaTime;

		return true;
	}
	else
	{
		return false;
	}
}

void AMachine::Action(float DeltaTime)
{

}

void AMachine::ActionExit()
{
	UE_LOG(LogTemp, Warning, TEXT("ActionExit"));
	bAction = false;
	CurActionTime = 0.0001f;

	Parts->Tags.Remove(TagName);

	StateChange(0);
}

