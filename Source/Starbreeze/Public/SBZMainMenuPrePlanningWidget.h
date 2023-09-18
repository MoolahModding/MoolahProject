#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZMenuStackWidget.h"
#include "SBZMainMenuPrePlanningWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuPrePlanningWidget : public USBZMenuStackWidget {
    GENERATED_BODY()
public:
    USBZMainMenuPrePlanningWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAsyncLoadingDone();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAsyncLoadingDone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZDifficulty GetDifficulty() const;
    
};

