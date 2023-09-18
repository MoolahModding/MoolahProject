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
    
    STARBREEZE_API FSBZSuitConfigInventorySaveData();
};

