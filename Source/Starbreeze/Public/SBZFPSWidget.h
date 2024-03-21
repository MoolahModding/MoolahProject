#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZFPSWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZFPSWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_FPS;
    
public:
    USBZFPSWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayedChanged(bool bInIsDisplaying);
    
};

