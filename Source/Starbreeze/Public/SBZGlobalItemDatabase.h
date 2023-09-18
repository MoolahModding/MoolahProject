#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZGlobalItemDatabase.generated.h"

class USBZArmorDatabase;
class USBZCoinDatabase;
class USBZGloveDatabase;
class USBZGloveInventorySlotDatabase;
class USBZInventorySlotDatabase;
class USBZItemBundleDatabase;
class USBZLoadoutSlotDatabase;
class USBZMaskDatabase;
class USBZMaskInventorySlotDatabase;
class USBZMaskMouldDatabase;
class USBZMaskPatternDatabase;
class USBZMaskPreconfigDatabase;
class USBZMaskPresetDatabase;
class USBZMaskVFXDatabase;
class USBZPayDayCreditDatabase;
class USBZPlaceableDatabase;
class USBZPlayerCharacterDatabase;
class USBZPreplanningAssetDatabase;
class USBZSkillLineDatabase;
class USBZSprayCanDatabase;
class USBZSuitBaseDatabase;
class USBZSuitDatabase;
class USBZSuitInventorySlotDatabase;
class USBZSuitMaterialDatabase;
class USBZSuitPatternDatabase;
class USBZSuitPresetDatabase;
class USBZThrowableDatabase;
class USBZToolDatabase;
class USBZVendorDatabase;
class USBZWatchDatabase;
class USBZWeaponCharmDatabase;
class USBZWeaponDatabase;
class USBZWeaponPatternDatabase;
class USBZWeaponPresetConfigDatabase;
class USBZWeaponStickerDatabase;
class USBZWeaponWearAndTearDatabase;

UCLASS(Blueprintable)
class USBZGlobalItemDatabase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZWeaponDatabase> PrimaryWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZWeaponDatabase> SecondaryWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZWeaponDatabase> OverkillWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZMaskDatabase> Masks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZGloveDatabase> Gloves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZSuitDatabase> Suits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZSuitPresetDatabase> SuitPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZSuitBaseDatabase> SuitBases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZWatchDatabase> Watches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZThrowableDatabase> Throwables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZToolDatabase> Tools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZPlaceableDatabase> Placeables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZSkillLineDatabase> SkillLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZPreplanningAssetDatabase> PreplanningAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZInventorySlotDatabase> PrimaryWeaponSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZInventorySlotDatabase> SecondaryWeaponSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZArmorDatabase> Armors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZWeaponPresetConfigDatabase> PrimaryWeaponPresetConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZWeaponPresetConfigDatabase> SecondaryWeaponPresetConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZLoadoutSlotDatabase> LoadoutSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZVendorDatabase> Vendors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZPlayerCharacterDatabase> PlayerCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZMaskInventorySlotDatabase> MaskInventorySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZSuitInventorySlotDatabase> SuitInventorySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZGloveInventorySlotDatabase> GloveInventorySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZSprayCanDatabase> SprayCans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZWeaponCharmDatabase> WeaponCharms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZWeaponPatternDatabase> WeaponPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZWeaponStickerDatabase> WeaponStickers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZWeaponWearAndTearDatabase> WeaponWearAndTears;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZMaskMouldDatabase> MaskMoulds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZMaskPresetDatabase> MaskPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZMaskPreconfigDatabase> MaskPreconfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZMaskPatternDatabase> MaskPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZMaskVFXDatabase> MaskVFXs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZSuitMaterialDatabase> SuitMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZSuitPatternDatabase> SuitPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZCoinDatabase> Coins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZItemBundleDatabase> ItemBundles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZPayDayCreditDatabase> PayDayCredits;
    
    USBZGlobalItemDatabase();

};

