#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZSabotageAnimationData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSBZSabotageAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval AcceptedHeights;
    
    STARBREEZE_API FSBZSabotageAnimationData();
};

