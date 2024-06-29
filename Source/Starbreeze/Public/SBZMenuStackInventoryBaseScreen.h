#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackScreenWidgetWithTutorial.h"
#include "SBZMenuStackInventoryBaseScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMenuStackInventoryBaseScreen : public USBZMenuStackScreenWidgetWithTutorial {
    GENERATED_BODY()
public:
    USBZMenuStackInventoryBaseScreen();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmptySlotSelected();
    
};

