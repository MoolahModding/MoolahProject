#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackWidget.h"
#include "SBZMainMenuCrimeNetStackWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuCrimeNetStackWidget : public USBZMenuStackWidget {
    GENERATED_BODY()
public:
    USBZMainMenuCrimeNetStackWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateLeft(FName StateName);
    
};

