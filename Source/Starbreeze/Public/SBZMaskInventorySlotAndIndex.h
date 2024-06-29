#pragma once
#include "CoreMinimal.h"
#include "SBZMaskInventorySlot.h"
#include "SBZMaskInventorySlotAndIndex.generated.h"

USTRUCT(BlueprintType)
struct FSBZMaskInventorySlotAndIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZMaskInventorySlot MaskInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    STARBREEZE_API FSBZMaskInventorySlotAndIndex();
};

