#pragma once
#include "CoreMinimal.h"
#include "SBZTurnAnimationContainer.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FSBZTurnAnimationContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* TurnAnimationStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* TurnAnimationCrouch;
    
    STARBREEZE_API FSBZTurnAnimationContainer();
};

