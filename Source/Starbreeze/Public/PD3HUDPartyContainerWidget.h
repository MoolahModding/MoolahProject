#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "PD3HUDPartyContainerWidget.generated.h"

class UPD3HUDAICrewStatusWidget;
class UPD3HUDPlayerStatusWidget;
class UPD3KeyItemContainer;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UPD3HUDPartyContainerWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPD3HUDPlayerStatusWidget> PartyClientWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPD3HUDAICrewStatusWidget> PartyAICrewWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3KeyItemContainer* Widget_SharedKeyItemContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_PartyPlayerWidgetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_PartyAICrewWidgetContainer;
    
public:
    UPD3HUDPartyContainerWidget();
};

