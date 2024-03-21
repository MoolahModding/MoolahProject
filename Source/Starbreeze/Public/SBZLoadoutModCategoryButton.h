#pragma once
#include "CoreMinimal.h"
#include "OnCategoryButtonSelectedDelegate.h"
#include "SBZMenuButton.h"
#include "SBZLoadoutModCategoryButton.generated.h"

class USBZModularPartDataAsset;
class USBZModularPartSlotBase;

UCLASS(Blueprintable, EditInlineNew)
class USBZLoadoutModCategoryButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZModularPartSlotBase* ModSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZModularPartDataAsset* EquippedPart;
    
public:
    USBZLoadoutModCategoryButton();
    UFUNCTION(BlueprintCallable)
    void SetSelectedCallback(FOnCategoryButtonSelected SelectedCallback);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponModCategoryDataIntialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeModCategoryData(const USBZModularPartSlotBase* InSlot, const USBZModularPartDataAsset* InPart);
    
};

