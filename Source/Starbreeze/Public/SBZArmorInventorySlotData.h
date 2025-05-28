#pragma once
#include "CoreMinimal.h"
#include "SBZInventorySlotData.h"
#include "SBZArmorInventorySlotData.generated.h"

class USBZArmorData;

UCLASS(Blueprintable)
class USBZArmorInventorySlotData : public USBZInventorySlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZArmorData* Armor;
    
    USBZArmorInventorySlotData();

};

