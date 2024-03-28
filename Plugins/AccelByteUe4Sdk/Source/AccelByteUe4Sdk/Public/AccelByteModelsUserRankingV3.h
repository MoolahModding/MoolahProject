#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "AccelByteModelsUserRankingV3.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsUserRankingV3 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Hidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper AdditionalData;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsUserRankingV3();
};

