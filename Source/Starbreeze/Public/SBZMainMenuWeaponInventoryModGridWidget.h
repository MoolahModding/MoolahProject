#pragma once
#include "CoreMinimal.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuWeaponInventoryModGridWidget.generated.h"

class USBZInventoryBaseData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuWeaponInventoryModGridWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZInventoryBaseData*> ItemArray;
    
public:
    USBZMainMenuWeaponInventoryModGridWidget();

    UFUNCTION(BlueprintCallable)
    void InitializeGridWithWeaponSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeGridWithMaskSlot(int32 InMaskSlotIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayGrid();
    
};

