#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutObjectiveBase.h"
#include "SBZHoldOutTimerObjective.generated.h"

class ASBZModifiableTimer;

UCLASS(Blueprintable, EditInlineNew)
class USBZHoldOutTimerObjective : public USBZHoldOutObjectiveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZModifiableTimer* ModifiableTimerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
public:
    USBZHoldOutTimerObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTimerProgressionReached(int32 ProgressionIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTimerFinished();
    
};

