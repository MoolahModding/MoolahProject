#pragma once
#include "CoreMinimal.h"
#include "SBZRenownRewardItem.h"
#include "SBZRenownRewardCategory.generated.h"

USTRUCT(BlueprintType)
struct FSBZRenownRewardCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZRenownRewardItem> CategorySkuItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    STARBREEZE_API FSBZRenownRewardCategory();
};

