#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZPrimaryToolWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZPrimaryToolWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZPrimaryToolWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoAmmoTriggered(float VisibilityTime);
    
};

