#pragma once
#include "CoreMinimal.h"
#include "SBZInventorySlotData.h"
#include "SBZMaskInventorySlotData.generated.h"

class USBZModularPartSlotBase;

UCLASS(Blueprintable)
class USBZMaskInventorySlotData : public USBZInventorySlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZModularPartSlotBase* MaskMouldSlot;
    
    USBZMaskInventorySlotData();
};

