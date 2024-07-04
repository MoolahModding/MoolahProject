#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
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
#include "SBZPlayerCharacterStoreItem.h"
#include "SBZPreplanningAssetStoreItem.h"
#include "SBZSprayCanStoreItem.h"
#include "SBZSuitBaseStoreItem.h"
#include "SBZSuitMaterialStoreItem.h"
#include "SBZSuitPatternStoreItem.h"
#include "SBZSuitPresetStoreItem.h"
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
    TMap<FGuid, FSBZWeaponStoreItem> PrimaryWeaponMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZWeaponStoreItem> SecondaryWeaponMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZGloveStoreItem> GloveMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZSuitPresetStoreItem> SuitPresetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZSuitBaseStoreItem> SuitBaseMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZWatchStoreItem> WatchMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZPreplanningAssetStoreItem> PreplanningAssetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZInventorySlotStoreItem> PrimaryInventorySlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZInventorySlotStoreItem> SecondaryInventorySlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZInventorySlotStoreItem> MaskInventorySlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZInventorySlotStoreItem> SuitInventorySlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZInventorySlotStoreItem> GloveInventorySlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZWeaponPresetStoreItem> PrimaryWeaponPresetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZWeaponPresetStoreItem> SecondaryWeaponPresetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZLoadoutSlotStoreItem> LoadoutSlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZSprayCanStoreItem> SprayCanMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZWeaponCharmStoreItem> WeaponCharmMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZWeaponPatternStoreItem> WeaponPatternMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZWeaponStickerStoreItem> WeaponStickerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZMaskMouldStoreItem> MaskMouldMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZMaskPresetStoreItem> MaskPresetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZMaskPreconfigStoreItem> MaskPreconfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZMaskPatternStoreItem> MaskPatternMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZMaskVFXStoreItem> MaskVFXMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZSuitMaterialStoreItem> SuitMaterialMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZSuitPatternStoreItem> SuitPatternMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZCoinStoreItem> CoinMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZItemBundleStoreItem> ItemBundleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZHeistStoreItem> HeistMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZVendorPermissionStoreItem> VendorPermissionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZPlayerCharacterStoreItem> PlayerCharacterMap;
    
    STARBREEZE_API FSBZPlayerStoreItemData();
};

