#pragma once
#include "CoreMinimal.h"
#include "SBZMaskPartConfigGroup.generated.h"

class USBZMaskPartConfig;
class USBZModularPartDataAsset;

USTRUCT(BlueprintType)
struct FSBZMaskPartConfigGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    USBZModularPartDataAsset* Part;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    USBZMaskPartConfig* Config;
    
    STARBREEZE_API FSBZMaskPartConfigGroup();
};

