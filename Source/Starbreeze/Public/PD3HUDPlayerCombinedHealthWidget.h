#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStateWidgetBase.h"
#include "PD3HUDPlayerCombinedHealthWidget.generated.h"

class UPD3AttributePercentWidget;
class USBZArmorWidget;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API UPD3HUDPlayerCombinedHealthWidget : public USBZPlayerStateWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3AttributePercentWidget* Widget_HealthGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZArmorWidget* Widget_ArmorGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3AttributePercentWidget* Widget_OverHealGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaskOffOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaskOnOpacity;
    
public:
    UPD3HUDPlayerCombinedHealthWidget();

};

