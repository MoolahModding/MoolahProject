#pragma once
#include "CoreMinimal.h"
#include "SBZCashRewardModifier.generated.h"

USTRUCT(BlueprintType)
struct FSBZCashRewardModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxReward;
    
    STARBREEZE_API FSBZCashRewardModifier();
};

