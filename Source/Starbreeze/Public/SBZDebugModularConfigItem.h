#pragma once
#include "CoreMinimal.h"
#include "SBZDebugModularConfigItem.generated.h"

class USBZEquippablePartConfig;
class USBZEquippablePartDataAsset;
class USBZModularPartSlotBase;

USTRUCT(BlueprintType)
struct FSBZDebugModularConfigItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZModularPartSlotBase* Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEquippablePartDataAsset* Part;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEquippablePartConfig* Config;
    
    STARBREEZE_API FSBZDebugModularConfigItem();
};

