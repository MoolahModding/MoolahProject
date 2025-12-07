#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZClientStateMachineState.h"
#include "SBZPlayerStateRemovedEvent.h"
#include "SBZStateMachineStateResult.generated.h"

class USBZLoadingScreen;
class USBZStateMachineDataResult;
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadingScreen* LoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataResult* ResultData;
    
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
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateRemoved(const FSBZPlayerStateRemovedEvent& InData);
    
};

