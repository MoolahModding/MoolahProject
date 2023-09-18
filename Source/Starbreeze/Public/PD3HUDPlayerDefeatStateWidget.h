#pragma once
#include "CoreMinimal.h"
#include "EPD3DefeatState.h"
#include "SBZCrewStateWidget.h"
#include "PD3HUDPlayerDefeatStateWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPD3HUDPlayerDefeatStateWidget : public USBZCrewStateWidget {
    GENERATED_BODY()
public:
    UPD3HUDPlayerDefeatStateWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefeatStateChanged(EPD3DefeatState OldState, EPD3DefeatState NewState);
    
};

