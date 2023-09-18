#pragma once
#include "CoreMinimal.h"
#include "SBZInfamyRewardData.h"
#include "SBZInfamyContentData.generated.h"

USTRUCT(BlueprintType)
struct FSBZInfamyContentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfamyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfamyPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZInfamyRewardData> InfamyRewards;
    
    STARBREEZE_API FSBZInfamyContentData();
};

