#pragma once
#include "CoreMinimal.h"
#include "SBZInventoryItem.h"
#include "SBZOverkillWeaponInventoryItem.generated.h"

class USBZEquippableData;

USTRUCT(BlueprintType)
struct FSBZOverkillWeaponInventoryItem : public FSBZInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEquippableData* OverkillWeaponData;
    
    STARBREEZE_API FSBZOverkillWeaponInventoryItem();
};

