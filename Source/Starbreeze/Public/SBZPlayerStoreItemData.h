#pragma once
#include "CoreMinimal.h"
#include "SBZArmorStoreItem.h"
#include "SBZCoinStoreItem.h"
#include "SBZGloveStoreItem.h"
#include "SBZHeistStoreItem.h"
#include "SBZInventorySlotStoreItem.h"
#include "SBZItemBundleStoreItem.h"
#include "SBZLoadoutSlotStoreItem.h"
#include "SBZMaskMouldStoreItem.h"
#include "SBZMaskPatternStoreItem.h"
#include "SBZMaskPreconfigStoreItem.h"
#include "SBZMaskPresetStoreItem.h"
#include "SBZMaskVFXStoreItem.h"
#include "SBZOverkillWeaponStoreItem.h"
#include "SBZOverskillLoadoutStoreItem.h"
#include "SBZPlaceableStoreItem.h"
#include "SBZPlayerCharacterStoreItem.h"
#include "SBZPreplanningAssetStoreItem.h"
#include "SBZSprayCanStoreItem.h"
#include "SBZSuitBaseStoreItem.h"
#include "SBZSuitMaterialStoreItem.h"
#include "SBZSuitPatternStoreItem.h"
#include "SBZSuitPresetStoreItem.h"
#include "SBZThrowableStoreItem.h"
#include "SBZToolStoreItem.h"
#include "SBZVendorPermissionStoreItem.h"
#include "SBZWatchStoreItem.h"
#include "SBZWeaponCharmStoreItem.h"
#include "SBZWeaponPatternStoreItem.h"
#include "SBZWeaponPresetStoreItem.h"
#include "SBZWeaponStickerStoreItem.h"
#include "SBZWeaponStoreItem.h"
#include "SBZPlayerStoreItemData.generated.h"

USTRUCT(BlueprintType)
struct FSBZPlayerStoreItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZWeaponStoreItem> PrimaryWeaponMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZWeaponStoreItem> SecondaryWeaponMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZGloveStoreItem> GloveMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZSuitPresetStoreItem> SuitPresetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZSuitBaseStoreItem> SuitBaseMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZWatchStoreItem> WatchMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZPreplanningAssetStoreItem> PreplanningAssetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZInventorySlotStoreItem> PrimaryInventorySlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZInventorySlotStoreItem> SecondaryInventorySlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZInventorySlotStoreItem> ArmorInventorySlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZInventorySlotStoreItem> MaskInventorySlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZInventorySlotStoreItem> SuitInventorySlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZInventorySlotStoreItem> GloveInventorySlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZWeaponPresetStoreItem> PrimaryWeaponPresetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZWeaponPresetStoreItem> SecondaryWeaponPresetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZLoadoutSlotStoreItem> LoadoutSlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZSprayCanStoreItem> SprayCanMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZWeaponCharmStoreItem> WeaponCharmMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZWeaponPatternStoreItem> WeaponPatternMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZWeaponStickerStoreItem> WeaponStickerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZMaskMouldStoreItem> MaskMouldMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZMaskPresetStoreItem> MaskPresetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZMaskPreconfigStoreItem> MaskPreconfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZMaskPatternStoreItem> MaskPatternMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZMaskVFXStoreItem> MaskVFXMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZSuitMaterialStoreItem> SuitMaterialMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZSuitPatternStoreItem> SuitPatternMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZCoinStoreItem> CoinMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZItemBundleStoreItem> ItemBundleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZHeistStoreItem> HeistMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZVendorPermissionStoreItem> VendorPermissionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZPlayerCharacterStoreItem> PlayerCharacterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZOverkillWeaponStoreItem> OverkillWeaponMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZOverskillLoadoutStoreItem> OverskillLoadoutMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZPlaceableStoreItem> PlaceableMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZToolStoreItem> ToolMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZArmorStoreItem> ArmorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZThrowableStoreItem> ThrowableMap;
    
    STARBREEZE_API FSBZPlayerStoreItemData();
};

