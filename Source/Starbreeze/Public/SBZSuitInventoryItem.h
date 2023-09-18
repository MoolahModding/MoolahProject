#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryItem.h"
#include "SBZSuitInventoryItem.generated.h"

class USBZSuitData;

USTRUCT(BlueprintType)
struct FSBZSuitInventoryItem : public FSBZInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSuitData* SuitData;
    
    STARBREEZE_API FSBZSuitInventoryItem();
};

