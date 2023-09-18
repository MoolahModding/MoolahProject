#pragma once
#include "CoreMinimal.h"
#include "SBZFacialAnimationContainer.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSBZFacialAnimationContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> Animations;
    
    STARBREEZE_API FSBZFacialAnimationContainer();
};

