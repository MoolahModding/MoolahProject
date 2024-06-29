#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZResultsScreenBaseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZResultsScreenBaseWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZResultsScreenBaseWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestartExpireTimerUpdated(float InNewTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestartCountdownTimerUpdated(float InNewTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestartAcceptTimerUpdated(float InNewTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMergePartyUpdated(const FString& PlayerDisplayName, const bool bIsMergePartySelected);
    
};

