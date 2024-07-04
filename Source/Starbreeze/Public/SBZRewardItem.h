#pragma once
#include "CoreMinimal.h"
#include "SBZRewardItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZRewardItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    STARBREEZE_API FSBZRewardItem();
};

