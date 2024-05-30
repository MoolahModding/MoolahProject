#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESBZBreachingEquipmentState.h"
#include "ESBZDrillState.h"
#include "SBZDrillWidget.generated.h"

class ASBZDrill;
class ASBZDrillEx;
class ASBZPocketDrill;
class UProgressBar;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZDrillWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TimeLeftText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* HeatItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZDrill* Drill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZDrillEx* DrillEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPocketDrill* PocketDrill;
    
public:
    USBZDrillWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateState(ESBZDrillState StateUpdated);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateBreachState(ESBZBreachingEquipmentState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProgressRateChanged(float ProgressPerSec, float HeatPerSec);
    
};

