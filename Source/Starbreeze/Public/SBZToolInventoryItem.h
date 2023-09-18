#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryItem.h"
#include "SBZToolInventoryItem.generated.h"

class USBZToolData;

USTRUCT(BlueprintType)
struct FSBZToolInventoryItem : public FSBZInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZToolData* ToolData;
    
    STARBREEZE_API FSBZToolInventoryItem();
};

