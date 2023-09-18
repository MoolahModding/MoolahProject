#pragma once
#include "CoreMinimal.h"
#include "SBZAgentNavRestrict.generated.h"

USTRUCT(BlueprintType)
struct FSBZAgentNavRestrict {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsCorridorValid: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsRecomputingPath: 1;
    
    STARBREEZE_API FSBZAgentNavRestrict();
};

