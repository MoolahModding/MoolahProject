#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZHUDPlayingWidget.generated.h"

class UPD3HUDPlayerStatusWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZHUDPlayingWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3HUDPlayerStatusWidget* Widget_LocalPlayerStatus;
    
public:
    USBZHUDPlayingWidget();
};

