#pragma once
#include "CoreMinimal.h"
#include "SBZLookFocusHandler.generated.h"

class ASBZCharacter;
class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FSBZLookFocusHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Goal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    STARBREEZE_API FSBZLookFocusHandler();
};

