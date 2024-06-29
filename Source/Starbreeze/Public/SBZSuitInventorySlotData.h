#pragma once
#include "CoreMinimal.h"
#include "SBZInventorySlotData.h"
#include "SBZSuitInventorySlotData.generated.h"

class USBZModularPartSlotBase;

UCLASS(Blueprintable)
class USBZSuitInventorySlotData : public USBZInventorySlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZModularPartSlotBase* SuitBaseSlot;
    
    USBZSuitInventorySlotData();

};

