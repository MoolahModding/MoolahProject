#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "PD3HUDGameTimerWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UPD3HUDGameTimerWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_Timer;
    
public:
    UPD3HUDGameTimerWidget();
};

