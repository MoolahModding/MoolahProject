#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryItem.h"
#include "SBZWatchInventoryItem.generated.h"

class USBZWatchData;

USTRUCT(BlueprintType)
struct FSBZWatchInventoryItem : public FSBZInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWatchData* WatchData;
    
    STARBREEZE_API FSBZWatchInventoryItem();
};

