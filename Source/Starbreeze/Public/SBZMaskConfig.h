#pragma once
#include "CoreMinimal.h"
#include "SBZMaskPartConfigGroup.h"
#include "SBZMaskConfig.generated.h"

class USBZMaskData;
class USBZModularPartDataAsset;
class USBZModularPartSlotBase;

USTRUCT(BlueprintType)
struct FSBZMaskConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaskData* MaskData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZMaskData* OriginalMaskData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZModularPartDataAsset*> ModDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<USBZModularPartSlotBase*, FSBZMaskPartConfigGroup> ModDataMap;
    
    STARBREEZE_API FSBZMaskConfig();
};

