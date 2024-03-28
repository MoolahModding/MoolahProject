#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESBZBreachingEquipmentState.h"
#include "SBZThermalLanceWidget.generated.h"

class ASBZThermalLance;
class UProgressBar;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZThermalLanceWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* FuelBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TimeLeftText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZThermalLance* ThermalLance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefuelingPercent;
    
public:
    USBZThermalLanceWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnThermalLanceSet();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnStateChanged(ESBZBreachingEquipmentState NewState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnRefuelingNeeded(bool bIsFuelingNeeded);
    
};

