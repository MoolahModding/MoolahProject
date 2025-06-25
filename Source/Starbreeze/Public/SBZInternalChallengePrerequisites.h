#pragma once
#include "CoreMinimal.h"
#include "SBZInternalChallengeStat.h"
#include "SBZInternalItemDetails.h"
#include "SBZInternalChallengePrerequisites.generated.h"

USTRUCT(BlueprintType)
struct FSBZInternalChallengePrerequisites {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CompletedChallengeIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZInternalChallengeStat> Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZInternalItemDetails> Items;
    
    STARBREEZE_API FSBZInternalChallengePrerequisites();
};

