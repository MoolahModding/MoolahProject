#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutBagTrackerData.generated.h"

class ASBZBagItem;

USTRUCT(BlueprintType)
struct FSBZHoldOutBagTrackerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZBagItem* Bag;
    
    STARBREEZE_API FSBZHoldOutBagTrackerData();
};

