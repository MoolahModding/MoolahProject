#pragma once
#include "CoreMinimal.h"
#include "SBZRewardItem.h"
#include "SBZRewardCategory.generated.h"

USTRUCT(BlueprintType)
struct FSBZRewardCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZRewardItem> CategorySkuItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    STARBREEZE_API FSBZRewardCategory();
};

