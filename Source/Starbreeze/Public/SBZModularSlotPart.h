#pragma once
#include "CoreMinimal.h"
#include "SBZModularSlotPart.generated.h"

class USBZModularPartDataAsset;
class USBZModularPartSlotBase;

USTRUCT(BlueprintType)
struct FSBZModularSlotPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZModularPartSlotBase* PartSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZModularPartDataAsset* PartDataAsset;
    
    STARBREEZE_API FSBZModularSlotPart();
};

