#pragma once
#include "CoreMinimal.h"
#include "SBZAsyncLoadingProgress.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuPreMatchWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuPreMatchWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZMainMenuPreMatchWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAsyncLoadingProgress(const FSBZAsyncLoadingProgress& Progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAsyncLoadingDone();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAsyncLoadingCancel();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAsyncLoadingDone();
    
};

