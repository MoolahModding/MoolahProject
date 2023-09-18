#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryItem.h"
#include "SBZArmorInventoryItem.generated.h"

class USBZArmorData;

USTRUCT(BlueprintType)
struct FSBZArmorInventoryItem : public FSBZInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZArmorData* ArmorData;
    
    STARBREEZE_API FSBZArmorInventoryItem();
};

