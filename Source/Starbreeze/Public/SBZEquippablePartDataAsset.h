#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponAttribute.h"
#include "SBZEquippablePartUIData.h"
#include "SBZModularPartDataAsset.h"
#include "SBZEquippablePartDataAsset.generated.h"

class USBZBaseWeaponData;
class USBZEquippableGadgetData;
class USBZEquippablePartCustomData;
class USBZModGripAnimData;
class USBZWeaponAmmoData;
class USBZWeaponMagazineData;
class USBZWeaponMuzzleData;
class USBZWeaponSightData;

UCLASS(Blueprintable, MinimalAPI)
class USBZEquippablePartDataAsset : public USBZModularPartDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZEquippablePartCustomData*> CustomDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponSightData*> SightDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZEquippableGadgetData*> GadgetDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponMagazineData* MagazineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponAmmoData* AmmoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZModGripAnimData* ModGripAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponMuzzleData* MuzzleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZWeaponAttribute, int32> AttributeModifierMap;
    
    USBZEquippablePartDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetModificationsUIData(const USBZBaseWeaponData* WeaponData, FSBZEquippablePartUIData& PartUIData) const;
    
};

