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
    UFUNCTION(BlueprintCallable)
    void OnRestartTimeExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnRestartCountdownTimerUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnRestartCountdownTimerStarted(float TimeRemainingUntilRestart);
    
    UFUNCTION(BlueprintCallable)
    void OnRestartAcceptTimerUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnRestartAccepted(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnExpireRestartTimerUpdate();
    
};

