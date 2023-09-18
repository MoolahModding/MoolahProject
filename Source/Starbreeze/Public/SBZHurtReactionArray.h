#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionAnimation.h"
#include "SBZHurtReactionArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZHurtReactionArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHurtReactionAnimation> MontageArray;
    
    STARBREEZE_API FSBZHurtReactionArray();
};

