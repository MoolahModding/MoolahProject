// Fill out your copyright notice in the Description page of Project Settings.

#include "FiniteStateMachineComponent.h"
#include "GameFramework/Actor.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UFiniteStateMachineComponent::UFiniteStateMachineComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	/*bReplicates = true;*/
}

void UFiniteStateMachineComponent::BeginPlay()
{
	Super::BeginPlay();

	SetState(InitialState);
}

void UFiniteStateMachineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	StateEvent.Broadcast(this, State, EFiniteStateMachineStateEvent::TICK);
}

void UFiniteStateMachineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFiniteStateMachineComponent, State);
}

void UFiniteStateMachineComponent::SetState(FName NewState)
{
	if (!GetOwner() || !GetOwner()->HasAuthority())
	{
		return;
	}

	State = NewState;
	OnRep_State();
}

void UFiniteStateMachineComponent::OnRep_State()
{
	if (LocalState.Compare(State) != 0)
	{
		StateEvent.Broadcast(this, LocalState, EFiniteStateMachineStateEvent::EXIT);
		StateEvent.Broadcast(this, State, EFiniteStateMachineStateEvent::ENTER);
		LocalState = State;
	}
}

