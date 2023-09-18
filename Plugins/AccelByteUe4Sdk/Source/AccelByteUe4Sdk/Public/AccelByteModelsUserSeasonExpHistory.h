#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserSeasonData.h"
#include "AccelByteModelsUserSeasonPaging.h"
#include "AccelByteModelsUserSeasonExpHistory.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUserSeasonExpHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsUserSeasonData> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsUserSeasonPaging Paging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Total;
    
    FAccelByteModelsUserSeasonExpHistory();
};

