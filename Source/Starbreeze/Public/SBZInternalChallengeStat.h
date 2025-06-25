#pragma once
#include "CoreMinimal.h"
#include "SBZInternalChallengeStat.generated.h"

USTRUCT(BlueprintType)
struct FSBZInternalChallengeStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    STARBREEZE_API FSBZInternalChallengeStat();
};

