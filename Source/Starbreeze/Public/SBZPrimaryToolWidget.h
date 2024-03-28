#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZPrimaryToolWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZPrimaryToolWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZPrimaryToolWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void OnNoAmmoTriggered(float VisibilityTime);
    
};

