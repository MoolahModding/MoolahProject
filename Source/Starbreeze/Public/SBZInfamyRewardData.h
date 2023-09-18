#pragma once
#include "CoreMinimal.h"
#include "SBZInfamyRewardData.generated.h"

USTRUCT(BlueprintType)
struct FSBZInfamyRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentGivenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContentGivenValue;
    
    STARBREEZE_API FSBZInfamyRewardData();
};

