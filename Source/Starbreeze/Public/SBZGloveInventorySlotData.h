#pragma once
#include "CoreMinimal.h"
#include "SBZInventorySlotData.h"
#include "SBZGloveInventorySlotData.generated.h"

class USBZModularPartSlotBase;

UCLASS(Blueprintable)
class USBZGloveInventorySlotData : public USBZInventorySlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZModularPartSlotBase* GloveBaseSlot;
    
    USBZGloveInventorySlotData();
};

