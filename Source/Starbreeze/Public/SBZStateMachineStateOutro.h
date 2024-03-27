#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZEndMissionResultData.h"
#include "SBZStateMachineStateOutro.generated.h"

class USBZStateMachineDataResult;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateOutro : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataResult* ResultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool WaitingForEndResult;
    
public:
    USBZStateMachineStateOutro();
    UFUNCTION()
    void OutroSequenceTimeout();
    
protected:
    UFUNCTION()
    void HandleMissionResultReady(const FSBZEndMissionResultData& MissionResultData);
    
    UFUNCTION()
    void DelayedLeaveOutroSequence();
    
};

