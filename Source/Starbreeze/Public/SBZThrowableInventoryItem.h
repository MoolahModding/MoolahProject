#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryItem.h"
#include "SBZThrowableInventoryItem.generated.h"

class USBZThrowableData;

USTRUCT(BlueprintType)
struct FSBZThrowableInventoryItem : public FSBZInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZThrowableData* ThrowableData;
    
    STARBREEZE_API FSBZThrowableInventoryItem();
};

