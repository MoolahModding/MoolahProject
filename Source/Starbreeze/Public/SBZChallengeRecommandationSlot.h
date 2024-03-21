#pragma once
#include "CoreMinimal.h"
#include "ESBZChallengeRecommandationsPriorityType.h"
#include "SBZChallengeRecommandationSlot.generated.h"

USTRUCT(BlueprintType)
struct FSBZChallengeRecommandationSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MandatoryTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ExcludedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckInfamyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZChallengeRecommandationsPriorityType ChallengeRecommandationsPriorityType;
    
    STARBREEZE_API FSBZChallengeRecommandationSlot();
};

