#pragma once
#include "CoreMinimal.h"
#include "SBZBoneDamageMultiplier.generated.h"

USTRUCT(BlueprintType)
struct FSBZBoneDamageMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriticalMultiplierReduction;
    
    STARBREEZE_API FSBZBoneDamageMultiplier();
};

