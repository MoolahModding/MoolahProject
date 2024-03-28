#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGlobalAchievementContributors.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsPaginatedGlobalAchievementContributors.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPaginatedGlobalAchievementContributors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsGlobalAchievementContributors> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsPaginatedGlobalAchievementContributors();
};

