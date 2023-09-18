#pragma once
#include "CoreMinimal.h"
#include "ESBZProjectileImpactType.h"
#include "SBZBaseImpactData.h"
#include "SBZProjectileTypeImpactData.generated.h"

USTRUCT(BlueprintType)
struct FSBZProjectileTypeImpactData : public FSBZBaseImpactData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZProjectileImpactType ImpactType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalMultiplier;
    
    STARBREEZE_API FSBZProjectileTypeImpactData();
};

