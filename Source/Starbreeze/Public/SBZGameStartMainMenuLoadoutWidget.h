#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZGameStartMainMenuLoadoutWidget.generated.h"

class UPanelWidget;
class USBZMainMenuInventoryItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZGameStartMainMenuLoadoutWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_LoadoutContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuInventoryItemWidget> DefaultItemWidgetClass;
    
public:
    USBZGameStartMainMenuLoadoutWidget();

};

