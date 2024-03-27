#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZResultsScreenStatusWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZResultsScreenStatusWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZResultsScreenStatusWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRestartExpireTimerUpdated(float InNewTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRestartCountdownTimerUpdated(float InNewTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRestartAcceptTimerUpdated(float InNewTime);
    
};

