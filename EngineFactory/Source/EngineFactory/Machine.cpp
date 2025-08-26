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
		if (ActionDelay(DeltaTime))
		{
			Action(DeltaTime);
		}
		else
		{
			ActionExit();
		}
	}
}

void AMachine::ActionReady(AEngineParts* Engine)
{
	UE_LOG(LogTemp, Warning, TEXT("ActionReady"));
	Parts = Engine;
	bAction = true;
}

bool AMachine::ActionDelay(float DeltaTime)
{
	if (CurActionTime < ActionTime)
	{
		UE_LOG(LogTemp, Log, TEXT("%f"), CurActionTime);
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
	Parts->Tags.Add(NextTagName);

	Parts->SetCanMove(true);
}

