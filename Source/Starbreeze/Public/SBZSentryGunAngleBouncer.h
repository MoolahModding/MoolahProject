#pragma once
#include "CoreMinimal.h"
#include "SBZSentryGunAngleBouncer.generated.h"

USTRUCT(BlueprintType)
struct FSBZSentryGunAngleBouncer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceStrength;
    
    STARBREEZE_API FSBZSentryGunAngleBouncer();
};

