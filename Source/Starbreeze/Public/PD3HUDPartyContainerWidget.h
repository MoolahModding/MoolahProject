#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "PD3HUDPartyContainerWidget.generated.h"

class UClass;
class UPD3KeyItemContainer;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UPD3HUDPartyContainerWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PartyClientWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PartyAICrewWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3KeyItemContainer* Widget_SharedKeyItemContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_PartyPlayerWidgetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_PartyAICrewWidgetContainer;
    
public:
    UPD3HUDPartyContainerWidget();

};

