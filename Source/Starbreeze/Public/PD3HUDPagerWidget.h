#pragma once
#include "CoreMinimal.h"
#include "EPD3HeistState.h"
#include "SBZWidgetBase.h"
#include "PD3HUDPagerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPD3HUDPagerWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    UPD3HUDPagerWidget();
private:
    UFUNCTION()
    void OnHeistStateChangedEvent(EPD3HeistState OldState, EPD3HeistState NewState);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeistStateChanged(EPD3HeistState NewState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnswerPagerValueChanged(int32 AnswerPagerValue, int32 MaxAnswerPagerValue);
    
};

