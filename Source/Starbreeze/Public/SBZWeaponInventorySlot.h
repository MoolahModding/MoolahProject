#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZItemInventorySlotType.h"
#include "SBZInventorySlot.h"
#include "SBZWeaponConfigInventorySlot.h"
#include "SBZWeaponPresetConfigInventorySlot.h"
#include "SBZWeaponInventorySlot.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponInventorySlot : public FSBZInventorySlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid WeaponInSlotEntitlementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid WeaponInSlotAccelByteItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WeaponInSlotAccelByteItemSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZItemInventorySlotType WeaponInventorySlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponConfigInventorySlot WeaponConfigInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponPresetConfigInventorySlot WeaponPresetConfigInventorySlot;
    
    STARBREEZE_API FSBZWeaponInventorySlot();
};

