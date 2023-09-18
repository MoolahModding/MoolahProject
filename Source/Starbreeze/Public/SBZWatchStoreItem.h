#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZWatchStoreItem.generated.h"

class USBZWatchData;

USTRUCT(BlueprintType)
struct FSBZWatchStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWatchData* WatchData;
    
    STARBREEZE_API FSBZWatchStoreItem();
};

