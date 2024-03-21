#pragma once
#include "CoreMinimal.h"
#include "ESBZEquippableLoadoutSlot.h"
#include "SBZEquippableConfig.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZGameStartMainMenuWeaponCustomizationWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZGameStartMainMenuWeaponCustomizationWidget : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig EquippableConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZEquippableLoadoutSlot EquippableSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WeaponSlotIndex;
    
public:
    USBZGameStartMainMenuWeaponCustomizationWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateEquippableConfig(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentWeaponSlotData(ESBZEquippableLoadoutSlot& OutEquippableSlot, int32& OutWeaponSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CustomizeWeaponInSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex);
    
};

