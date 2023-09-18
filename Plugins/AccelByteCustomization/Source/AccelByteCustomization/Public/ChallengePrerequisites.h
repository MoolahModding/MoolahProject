#pragma once
#include "CoreMinimal.h"
#include "ChallengeStat.h"
#include "ItemDetails.h"
#include "ChallengePrerequisites.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FChallengePrerequisites {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CompletedChallengeIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChallengeStat> Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemDetails> Items;
    
    FChallengePrerequisites();
};

