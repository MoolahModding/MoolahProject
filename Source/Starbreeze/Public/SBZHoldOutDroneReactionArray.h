#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutDroneReactionArray.generated.h"

class ASBZHoldOutDroneReaction;

USTRUCT(BlueprintType)
struct FSBZHoldOutDroneReactionArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZHoldOutDroneReaction*> DroneReactions;
    
    STARBREEZE_API FSBZHoldOutDroneReactionArray();
};

