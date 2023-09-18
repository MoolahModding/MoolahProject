// Copyright (C) 2019 Pedro Montoto Garc�a - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "DelegateTimer.h"
#include "Curves/CurveFloat.h"
#include "TimeEnhancements.h"
#include "CurveFloatDelegateTimer.generated.h"

// This fires every time the configured period fires
// @see UCurveFloatDelegateTimer::CurveEvalTick
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FDelegateTimerFloatExec, const UCurveFloatDelegateTimer*, CurveFloatTimer, float, CurveElapsedTime, float, CurveTimeSinceLast, float, CurveValue, float, CurveTime);

/**
 * A lightweight substitute for a simple float curve timeline, configurable by period and first delay.
 * Uses timers internally, that in turn piggyback to world tick.
 * It can be stopped, paused, played in reverse and reconfigured for different tick rates.
 */
UCLASS(Blueprintable, BlueprintType)
class TIMEENHANCEMENTS_API UCurveFloatDelegateTimer : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	/**
	 * Default object creation and initialization function, exposed to BP as an Async Action
	 * @param WorldContextObject The default world context object if used inside actors, to be provided in other UObjects
	 * @param Period The amount of seconds between two TickExecs
	 * @param DelayToFirstExecution The amount of seconds between this function and the first TickExec
	 * @param Curve The UFloatCurve that this timer will follow
	 * @param bLoops If the curve has to be played in a loop (i.e. when it ends it plays from the beginning again) set this to true, otherwise the curve will play as the value it has in its last frame after it finishes playing it.
	 * @param CurveDuration The duration override for the curve lenght. If this is set to 0.0f the duration of the curve is assumed to be its last frame's time.
	 * @returns A newly created UCurveFloatDelegateTimer, configured as per params. Shows in blueprint as Latent exec pins.
	 * @see UCurveFloatDelegateTimer::CurveEvalTick
	 */
	UFUNCTION(BlueprintCallable, Category = "Time Enhancements", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", AdvancedDisplay = "bLoops, CurveDuration"))
	static UCurveFloatDelegateTimer* CreateCurveFloatDelegateTimer(UObject* WorldContextObject, float Period, float DelayToFirstExecution, const UCurveFloat* Curve, bool bLoops = true, float CurveDuration = 0.0f);

	/**
	 * Delegate to bind to for timed executions, it will show as an exec pin if this class is used as a return value
	 * @param Timer The object that is executing the delegate
	 * @param ElapsedTime The amount of seconds since the object was last initialized
	 * @param TimeSinceLast The amount of seconds since the object's last execution
	 * @param CurveValue The value of the curve at the current time
	 * @param CurveTime The time along the curve (between 0 and the curve length)
	 * @see UCurveFloatDelegateTimer::CreateCurveFloatDelegateTimer
	 */
	UPROPERTY(BlueprintAssignable)
	FDelegateTimerFloatExec CurveEvalTick;

protected:

	/**
	 * Initializes this object and starts the TickExec loop. Called by default from UDelegateTimer::CreateDelegateTimer. Can be called again to reconfigure a timer.
	 * @param WorldContextObject The default world context object if used inside actors, to be provided in other UObjects
	 * @param Period The amount of seconds between two TickExecs
	 * @param DelayToFirstExecution The amount of seconds between this function and the first TickExec
	 * @param Curve The UFloatCurve that this timer will follow
	 * @param bLoops If the curve has to be played in a loop (i.e. when it ends it plays from the beginning again) set this to true, otherwise the curve will play as the value it has in its last frame after it finishes playing it.
	 * @param CurveDuration The duration override for the curve lenght. If this is set to 0.0f the duration of the curve is assumed to be its last frame's time.
	 * @returns A newly created UCurveFloatDelegateTimer, configured as per params. Shows in blueprint as Latent exec pins.
	 * @see UCurveFloatDelegateTimer::CurveEvalTick
	 */
	virtual UCurveFloatDelegateTimer* Init(UObject* WorldContextObject, float Period, float DelayToFirstExecution, const UCurveFloat* Curve, bool bLoops, float CurveDuration);

	/**
	 * The curve this timeline is going to follow
	 */
	const UCurveFloat* Curve;

	/**
	 * Does the curve need to be played in a loop?
	 */
	bool bLoops;

	/**
	 * The curve duration in seconds, as specified during init time.
	 */
	float CurveDuration;

private:
	/**
	 * This function gets executed for every needed TickExec as per given configuration. Can be overriden, but make sure to call the parent class function.
	 */
	UFUNCTION()
	void FireCurveEvalTick(const UDelegateTimer* Timer, float ElapsedTime, float TimeSinceLast);
};
