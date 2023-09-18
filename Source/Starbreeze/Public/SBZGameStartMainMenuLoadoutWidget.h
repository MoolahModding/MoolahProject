#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZGameStartMainMenuLoadoutWidget.generated.h"

class UClass;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZGameStartMainMenuLoadoutWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_LoadoutContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DefaultItemWidgetClass;
    
public:
    USBZGameStartMainMenuLoadoutWidget();

};

