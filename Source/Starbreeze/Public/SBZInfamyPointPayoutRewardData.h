#pragma once
#include "CoreMinimal.h"
#include "SBZInfamyPointPayoutRewardData.generated.h"

USTRUCT(BlueprintType)
struct FSBZInfamyPointPayoutRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Completion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StealthBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AllBagsBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Total;
    
    STARBREEZE_API FSBZInfamyPointPayoutRewardData();
};

