#pragma once
#include "CoreMinimal.h"
#include "SBZSuitInventorySlot.h"
#include "SBZSuitConfigInventorySaveData.generated.h"

USTRUCT(BlueprintType)
struct FSBZSuitConfigInventorySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSuitInventorySlot> SuitConfigSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZSuitInventorySlot> CheckedSuitConfigSlots;
    
    STARBREEZE_API FSBZSuitConfigInventorySaveData();
};

