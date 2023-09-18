#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "ChallengeConfiguration.h"
#include "RetrieveAllChallengesResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FRetrieveAllChallengesResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChallengeConfiguration> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FRetrieveAllChallengesResponse();
};

