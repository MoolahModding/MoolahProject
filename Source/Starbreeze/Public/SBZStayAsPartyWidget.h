#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZStayAsPartyWidget.generated.h"

class ASBZPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class USBZStayAsPartyWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZStayAsPartyWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup(const TArray<ASBZPlayerState*>& PlayerStateArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestartStarted(float InNewTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRestartExpireTimerUpdated(float InNewTime);
    
    UFUNCTION(BlueprintCallable)
    void OnRestartCountdownTimerUpdated(float InNewTime);
    
    UFUNCTION(BlueprintCallable)
    void OnRestartAcceptTimerUpdated(float InNewTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestartAcceptTimerStarted(float InNewTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMergePartyUpdated(const FString& PlayerDisplayName, const bool bIsMergePartySelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialTimerStarted(float InNewTime);
    
};

