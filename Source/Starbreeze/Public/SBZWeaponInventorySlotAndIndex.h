#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponInventorySlot.h"
#include "SBZWeaponInventorySlotAndIndex.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponInventorySlotAndIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZWeaponInventorySlot WeaponInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    STARBREEZE_API FSBZWeaponInventorySlotAndIndex();
};

