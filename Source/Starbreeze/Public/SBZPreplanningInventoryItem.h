#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryItem.h"
#include "SBZPreplanningInventoryItem.generated.h"

class USBZPreplanningAssetData;

USTRUCT(BlueprintType)
struct FSBZPreplanningInventoryItem : public FSBZInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPreplanningAssetData* PreplanningData;
    
    STARBREEZE_API FSBZPreplanningInventoryItem();
};

