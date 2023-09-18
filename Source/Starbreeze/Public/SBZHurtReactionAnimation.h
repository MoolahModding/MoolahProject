#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionAnimation.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSBZHurtReactionAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    STARBREEZE_API FSBZHurtReactionAnimation();
};

