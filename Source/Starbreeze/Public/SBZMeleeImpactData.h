#pragma once
#include "CoreMinimal.h"
#include "ESBZMeleeAttackCategory.h"
#include "SBZStandardImpactData.h"
#include "SBZMeleeImpactData.generated.h"

USTRUCT(BlueprintType)
struct FSBZMeleeImpactData : public FSBZStandardImpactData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZMeleeAttackCategory, float> CategoryDecalScale;
    
    STARBREEZE_API FSBZMeleeImpactData();
};

