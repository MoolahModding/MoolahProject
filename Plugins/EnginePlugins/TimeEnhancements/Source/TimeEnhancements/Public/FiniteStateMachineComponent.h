// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FiniteStateMachineComponent.generated.h"


UENUM(BlueprintType)
enum class EFiniteStateMachineStateEvent : uint8
{
	ENTER UMETA(DisplayName = "Enter State"),
	TICK UMETA(DisplayName = "Tick State"),
	EXIT UMETA(DisplayName = "Exit State")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStateEventDelegate, UFiniteStateMachineComponent*, FSM, FName, State, EFiniteStateMachineStateEvent, StateEvent);

UCLASS( ClassGroup=(TimeEnhancements), meta=(BlueprintSpawnableComponent) )
class TIMEENHANCEMENTS_API UFiniteStateMachineComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UFiniteStateMachineComponent();

	UPROPERTY(BlueprintAssignable, Category = "FSMOnline")
	FStateEventDelegate StateEvent;

	// Begin UObject interface
	void BeginPlay();
	// End UObject interface

	// Begin UActorComponent interface
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;
	// End UActorComponent interface

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "FSMOnline")
	virtual void SetState(FName NewState);

protected:
	UPROPERTY(EditAnywhere, Category = "FSMOnline")
	FName InitialState = FName("Init");

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_State, Category = "FSMOnline")
	FName State = NAME_None;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FSMOnline")
	FName LocalState = NAME_None;

	UFUNCTION()
	virtual void OnRep_State();
};
