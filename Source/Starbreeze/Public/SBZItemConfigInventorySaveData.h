#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponInventorySlot.h"
#include "SBZItemConfigInventorySaveData.generated.h"

USTRUCT(BlueprintType)
struct FSBZItemConfigInventorySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponInventorySlot> PrimaryWeaponConfigSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponInventorySlot> SecondaryWeaponConfigSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponInventorySlot> CheckedPrimaryWeaponConfigSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponInventorySlot> CheckedSecondaryWeaponConfigSlots;
    
    STARBREEZE_API FSBZItemConfigInventorySaveData();
};

