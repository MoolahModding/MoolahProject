#pragma once
#include "CoreMinimal.h"
#include "SBZTagReactionActivation.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSBZTagReactionActivation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomOffset;
    
    STARBREEZE_API FSBZTagReactionActivation();
};

