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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestartExpireTimerUpdated(float InNewTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestartCountdownTimerUpdated(float InNewTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestartAcceptTimerUpdated(float InNewTime);
    
};

