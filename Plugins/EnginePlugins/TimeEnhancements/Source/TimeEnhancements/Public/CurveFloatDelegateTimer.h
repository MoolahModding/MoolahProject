#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DelegateTimerFloatExecDelegate.h"
#include "CurveFloatDelegateTimer.generated.h"

class UCurveFloat;
class UCurveFloatDelegateTimer;
class UDelegateTimer;
class UObject;

UCLASS(Blueprintable)
class TIMEENHANCEMENTS_API UCurveFloatDelegateTimer : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateTimerFloatExec CurveEvalTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateTimerFloatExec CurveFinished;
    
    UCurveFloatDelegateTimer();

private:
    UFUNCTION(BlueprintCallable)
    void FireCurveEvalTick(const UDelegateTimer* Timer, float ElapsedTime, float TimeSinceLast);
    
public:
    UFUNCTION(BlueprintCallable)
    static void DestroyCurveFloatDelegateTimer(UCurveFloatDelegateTimer* Object);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCurveFloatDelegateTimer* CreateCurveFloatDelegateTimer(UObject* WorldContextObject, float Period, float DelayToFirstExecution, const UCurveFloat* Curve, bool bLoops, float CurveDuration);
    
};

