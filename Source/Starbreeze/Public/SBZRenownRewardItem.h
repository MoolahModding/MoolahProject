#pragma once
#include "CoreMinimal.h"
#include "SBZRenownRewardItem.generated.h"

USTRUCT(BlueprintType)
struct FSBZRenownRewardItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    STARBREEZE_API FSBZRenownRewardItem();
};

