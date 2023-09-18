#pragma once
#include "CoreMinimal.h"
#include "SBZThreeWayBlendInstance.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSBZThreeWayBlendInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    STARBREEZE_API FSBZThreeWayBlendInstance();
};

