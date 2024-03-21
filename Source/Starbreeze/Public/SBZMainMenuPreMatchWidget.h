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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAsyncLoadingProgress(const FSBZAsyncLoadingProgress& Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAsyncLoadingDone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAsyncLoadingCancel();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAsyncLoadingDone();
    
};

