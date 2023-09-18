#pragma once
#include "CoreMinimal.h"
#include "SBZWeakpointHideInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeakpointHideInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CPDIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Bit;
    
    STARBREEZE_API FSBZWeakpointHideInfo();
};

