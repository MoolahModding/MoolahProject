#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateResult.generated.h"

class USBZWidgetBase;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateResult : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZWidgetBase* ResultWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> PlayerRequestedRestart;
    
public:
    USBZStateMachineStateResult();
private:
    UFUNCTION()
    void OnRestartTimeExpired();
    
    UFUNCTION()
    void OnRestartCountdownTimerUpdated();
    
    UFUNCTION()
    void OnRestartCountdownTimerStarted(float TimeRemainingUntilRestart);
    
    UFUNCTION()
    void OnRestartAcceptTimerUpdated();
    
    UFUNCTION()
    void OnRestartAccepted(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION()
    void OnExpireRestartTimerUpdate();
    
};

