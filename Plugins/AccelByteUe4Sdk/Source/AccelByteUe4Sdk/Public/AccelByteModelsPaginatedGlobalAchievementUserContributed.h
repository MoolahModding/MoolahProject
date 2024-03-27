#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGlobalAchievementContributed.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsPaginatedGlobalAchievementUserContributed.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPaginatedGlobalAchievementUserContributed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsGlobalAchievementContributed> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsPaginatedGlobalAchievementUserContributed();
};

