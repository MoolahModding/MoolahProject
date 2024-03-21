#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStateWidgetBase.h"
#include "PD3HUDPlayerCombinedHealthWidget.generated.h"

class UPD3AttributePercentWidget;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API UPD3HUDPlayerCombinedHealthWidget : public USBZPlayerStateWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3AttributePercentWidget* Widget_HealthGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3AttributePercentWidget* Widget_ArmorGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaskOffOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaskOnOpacity;
    
public:
    UPD3HUDPlayerCombinedHealthWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnReplenishArmorChanged(bool bIsReplenishingArmor);
    
};

