#pragma once
#include "CoreMinimal.h"
#include "SBZArmorInventorySlot.h"
#include "SBZArmorInventorySlotAndIndex.generated.h"

USTRUCT(BlueprintType)
struct FSBZArmorInventorySlotAndIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZArmorInventorySlot ArmorInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    STARBREEZE_API FSBZArmorInventorySlotAndIndex();
};

