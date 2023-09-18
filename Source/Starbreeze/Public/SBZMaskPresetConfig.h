#pragma once
#include "CoreMinimal.h"
#include "SBZMaskPresetConfig.generated.h"

class USBZMaskPresetData;

USTRUCT(BlueprintType)
struct FSBZMaskPresetConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskPresetData* MaskPresetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZMaskPresetData* OriginalMaskPresetData;
    
    STARBREEZE_API FSBZMaskPresetConfig();
};

