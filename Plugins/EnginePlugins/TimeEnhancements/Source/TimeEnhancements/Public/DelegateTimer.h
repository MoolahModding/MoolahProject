// Copyright (C) 2019 Pedro Montoto García - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "TimeEnhancements.h"
#include "DelegateTimer.generated.h"

// This fires every time the configured period fires
// @see UDelegateTimer::TickExec
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDelegateTimerExec, const UDelegateTimer*, Timer, float, ElapsedTime, float, TimeSinceLast);

/**
 * A lightweight substitute for a tick event, configurable by period and first delay.
 * Uses timers internally, that in turn piggyback to world tick.
 * It can be stopped, paused and reconfigured for different tick rates.
 */
UCLASS(Blueprintable, BlueprintType)
class TIMEENHANCEMENTS_API UDelegateTimer : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:

	/**
	 * Default object creation and initialization function, exposed to BP as an Async Action
	 * @param WorldContextObject The default world context object if used inside actors, to be provided in other UObjects
	 * @param Period The amount of seconds between two TickExecs
	 * @param DelayToFirstExecution The amount of seconds between this function and the first TickExec
	 * @returns A newly created DelegateTimer, configured as per params. Shows in blueprint as Latent exec pins.
	 * @see UDelegateTimer::TickExec
	 */
	UFUNCTION(BlueprintCallable, Category = "Time Enhancements", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"))
	static UDelegateTimer* CreateDelegateTimer(UObject* WorldContextObject, float Period = 2.0f, float DelayToFirstExecution = 0.0f);

	/**
	 * Delegate to bind to for timed executions, it will show as an exec pin if this class is used as a return value
	 * @param Timer The object that is executing the delegate
	 * @param ElapsedTime The amount of seconds since the object was last initialized
	 * @param TimeSinceLast The amount of seconds since the object's last execution
	 * @see UDelegateTimer::CreateDelegateTimer
	 */
	UPROPERTY(BlueprintAssignable, Category = "Time Enhancements|Delegate Timer")
	FDelegateTimerExec TickExec;

	/**
	 * The time of this object's Init 
	 * Usually just after creation time, using UDelegateTimer::CreateDelegateTimer
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Time Enhancements|Delegate Timer")
	FDateTime TimeStart;

	/**
	 * The time of this object's first fired event, equal to 0 Ticks if never fired
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Time Enhancements|Delegate Timer")
	FDateTime TimeFirstExecution;

	/**
	 * The time of this object's latest fired event, equal to 0 Ticks if never fired
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Time Enhancements|Delegate Timer")
	FDateTime TimeLastExecution;

protected:

	/**
	 * Initializes this object and starts the TickExec loop. Called by default from UDelegateTimer::CreateDelegateTimer. Can be called again to reconfigure a timer.
	 * @param WorldContextObject The default world context object if used inside actors, to be provided in other UObjects
	 * @param Period The amount of seconds between two TickExecs
	 * @param DelayToFirstExecution The amount of seconds between this function and the first TickExec
	 * @returns A newly created DelegateTimer, configured as per params. Shows in blueprint as Latent exec pins.
	 * @see UDelegateTimer::CreateDelegateTimer
	 */
	virtual UDelegateTimer* Init(UObject* WorldContextObject, float Period, float DelayToFirstExecution);

	/**
	 * This function gets executed for every needed TickExec as per given configuration. Can be overriden, but make sure to call the parent class function.
	 */
	virtual void ExecutionCycle();

	/**
	 * Internal loop timer handle for flow control
	 */
	FTimerHandle TimerHandle;
};
