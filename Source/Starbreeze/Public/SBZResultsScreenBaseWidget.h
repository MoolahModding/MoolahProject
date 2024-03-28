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
    UFUNCTION(BlueprintImplementableEvent)
    void OnRestartExpireTimerUpdated(float InNewTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRestartCountdownTimerUpdated(float InNewTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRestartAcceptTimerUpdated(float InNewTime);
    
};

