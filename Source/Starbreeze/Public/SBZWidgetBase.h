#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    USBZWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetPreRemovedFromParent();
    
};

