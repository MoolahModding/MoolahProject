#pragma once
#include "CoreMinimal.h"
#include "SBZSuitPartConfigGroup.generated.h"

class USBZModularPartDataAsset;
class USBZSuitPartConfig;

USTRUCT(BlueprintType)
struct FSBZSuitPartConfigGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    USBZModularPartDataAsset* Part;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    USBZSuitPartConfig* Config;
    
    STARBREEZE_API FSBZSuitPartConfigGroup();
};

