#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsUserGlobalAchievement.h"
#include "AccelByteModelsPaginatedUserGlobalAchievement.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPaginatedUserGlobalAchievement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsUserGlobalAchievement> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsPaginatedUserGlobalAchievement();
};

