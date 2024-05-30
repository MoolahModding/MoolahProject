#pragma once
#include "CoreMinimal.h"
#include "ESBZRewardRequestType.h"
#include "SBZItemRewardRequestEntry.generated.h"

USTRUCT(BlueprintType)
struct FSBZItemRewardRequestEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZRewardRequestType RewardRequestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString AccelByteUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    STARBREEZE_API FSBZItemRewardRequestEntry();
};

