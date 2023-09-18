#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "UserChallengeRecord.h"
#include "RetrieveChallengeRecordSpecificUserResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTECUSTOMIZATION_API FRetrieveChallengeRecordSpecificUserResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserChallengeRecord> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FRetrieveChallengeRecordSpecificUserResponse();
};

