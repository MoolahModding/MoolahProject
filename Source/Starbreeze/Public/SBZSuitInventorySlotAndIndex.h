#pragma once
#include "CoreMinimal.h"
#include "SBZSuitInventorySlot.h"
#include "SBZSuitInventorySlotAndIndex.generated.h"

USTRUCT(BlueprintType)
struct FSBZSuitInventorySlotAndIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZSuitInventorySlot SuitInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    STARBREEZE_API FSBZSuitInventorySlotAndIndex();
};

