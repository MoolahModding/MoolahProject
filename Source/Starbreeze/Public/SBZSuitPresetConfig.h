#pragma once
#include "CoreMinimal.h"
#include "SBZSuitPresetConfig.generated.h"

class USBZSuitPresetData;

USTRUCT(BlueprintType)
struct FSBZSuitPresetConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSuitPresetData* SuitPresetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZSuitPresetData* OriginalSuitPresetData;
    
    STARBREEZE_API FSBZSuitPresetConfig();
};

