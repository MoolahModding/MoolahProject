#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuBaseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuBaseWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZMainMenuBaseWidget();

private:
    UFUNCTION(BlueprintCallable)
    void DestroyWidget();
    
};

