#pragma once
#include "CoreMinimal.h"
#include "EPD3HeistState.h"
#include "SBZCrewStateWidget.h"
#include "PD3DefeatTimerWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UPD3DefeatTimerWidget : public USBZCrewStateWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TimerText;
    
public:
    UPD3DefeatTimerWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
};

