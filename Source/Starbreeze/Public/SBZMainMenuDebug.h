#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuDebug.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuDebug : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZMainMenuDebug();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmakingGroupChange(int32 MMakingGroup);
    
};

