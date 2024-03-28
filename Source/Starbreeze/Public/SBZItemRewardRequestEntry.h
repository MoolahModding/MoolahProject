#pragma once
#include "CoreMinimal.h"
#include "ESBZRewardRequestType.h"
#include "SBZItemRewardRequestEntry.generated.h"

class ASBZPlayerState;

USTRUCT(BlueprintType)
struct FSBZItemRewardRequestEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZRewardRequestType RewardRequestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* SBZPlayerState;
    
    STARBREEZE_API FSBZItemRewardRequestEntry();
};

