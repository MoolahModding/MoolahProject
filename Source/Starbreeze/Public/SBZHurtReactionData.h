#pragma once
#include "CoreMinimal.h"
#include "ESBZDamageWeight.h"
#include "SBZHurtReactionData.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FSBZHurtReactionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* HurtReactionWeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HurtReactionWeightModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDamageWeight DesiredHurtReactionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HurtReactionWeightBuildupModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriticalHurtReactionWeightBuildupModifier;
    
    STARBREEZE_API FSBZHurtReactionData();
};

