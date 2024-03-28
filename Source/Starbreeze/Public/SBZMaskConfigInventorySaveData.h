#pragma once
#include "CoreMinimal.h"
#include "SBZMaskInventorySlot.h"
#include "SBZMaskConfigInventorySaveData.generated.h"

USTRUCT(BlueprintType)
struct FSBZMaskConfigInventorySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZMaskInventorySlot> MaskConfigSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZMaskInventorySlot> CheckedMaskConfigSlots;
    
    STARBREEZE_API FSBZMaskConfigInventorySaveData();
};

