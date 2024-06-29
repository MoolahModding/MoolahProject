#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SBZArmorInventoryItem.h"
#include "SBZGloveInventoryItem.h"
#include "SBZOverkillWeaponInventoryItem.h"
#include "SBZPlaceableInventoryItem.h"
#include "SBZPlayerCharacterInventoryItem.h"
#include "SBZPreplanningInventoryItem.h"
#include "SBZSuitInventoryItem.h"
#include "SBZThrowableInventoryItem.h"
#include "SBZToolInventoryItem.h"
#include "SBZWatchInventoryItem.h"
#include "SBZPlayerInventory.generated.h"

UCLASS(Blueprintable)
class USBZPlayerInventory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZOverkillWeaponInventoryItem> OverkillWeaponInventoryItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZPreplanningInventoryItem> PreplanningInventoryItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZGloveInventoryItem> GloveInventoryItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZSuitInventoryItem> SuitInventoryItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZWatchInventoryItem> WatchInventoryItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZPlaceableInventoryItem> PlaceableInventoryItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZToolInventoryItem> ToolInventoryItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZArmorInventoryItem> ArmorInventoryItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZThrowableInventoryItem> ThrowableInventoryItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSBZPlayerCharacterInventoryItem> PlayerCharacterInventoryItemMap;
    
    USBZPlayerInventory();

};

