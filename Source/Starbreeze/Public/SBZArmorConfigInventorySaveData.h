#pragma once
#include "CoreMinimal.h"
#include "SBZArmorInventorySlot.h"
#include "SBZArmorConfigInventorySaveData.generated.h"

USTRUCT(BlueprintType)
struct FSBZArmorConfigInventorySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZArmorInventorySlot> ArmorConfigSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZArmorInventorySlot> CheckedArmorConfigSlots;
    
    STARBREEZE_API FSBZArmorConfigInventorySaveData();
};

