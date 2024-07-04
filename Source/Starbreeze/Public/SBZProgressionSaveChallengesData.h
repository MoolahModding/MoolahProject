#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZClientSaveChallengeV2.h"
#include "SBZDailyChallengeBlock.h"
#include "SBZProgressionSaveChallengesData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZProgressionSaveChallengesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZClientSaveChallengeV2> SavedChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FetchedFromAPI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZDailyChallengeBlock DailyChallengeBlockMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime DailyChallengePullDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RerollAvailable;
    
    FSBZProgressionSaveChallengesData();
};

