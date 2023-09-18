#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBaseImpactData.h"
#include "SBZStandardImpactData.generated.h"

USTRUCT(BlueprintType)
struct FSBZStandardImpactData : public FSBZBaseImpactData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DecalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalMaxStretchCosAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DecalMaxStretchScaler;
    
    STARBREEZE_API FSBZStandardImpactData();
};

