#pragma once
#include "CoreMinimal.h"
#include "SBZDamageMultiplierDistance.generated.h"

USTRUCT(BlueprintType)
struct FSBZDamageMultiplierDistance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    STARBREEZE_API FSBZDamageMultiplierDistance();
};

