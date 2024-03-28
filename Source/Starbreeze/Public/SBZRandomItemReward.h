#pragma once
#include "CoreMinimal.h"
#include "ESBZRandomRewardReason.h"
#include "SBZRandomItemReward.generated.h"

class USBZInventoryBaseData;

USTRUCT(BlueprintType)
struct FSBZRandomItemReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* InventoryBaseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZRandomRewardReason RandomRewardReason;
    
    STARBREEZE_API FSBZRandomItemReward();
};

