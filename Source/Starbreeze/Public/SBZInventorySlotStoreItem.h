#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZInventorySlotStoreItem.generated.h"

class USBZInventorySlotData;

USTRUCT(BlueprintType)
struct FSBZInventorySlotStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZInventorySlotData* InventorySlotData;
    
    STARBREEZE_API FSBZInventorySlotStoreItem();
};

