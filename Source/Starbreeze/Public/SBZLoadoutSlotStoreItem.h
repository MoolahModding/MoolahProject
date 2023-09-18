#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZLoadoutSlotStoreItem.generated.h"

class USBZLoadoutSlotData;

USTRUCT(BlueprintType)
struct FSBZLoadoutSlotStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLoadoutSlotData* LoadoutSlotData;
    
    STARBREEZE_API FSBZLoadoutSlotStoreItem();
};

