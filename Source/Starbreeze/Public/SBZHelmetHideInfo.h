#pragma once
#include "CoreMinimal.h"
#include "SBZHelmetHideInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZHelmetHideInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CPDIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Bit;
    
    STARBREEZE_API FSBZHelmetHideInfo();
};

