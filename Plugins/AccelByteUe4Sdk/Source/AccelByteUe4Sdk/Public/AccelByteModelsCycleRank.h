#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "AccelByteModelsCycleRank.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsCycleRank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper AdditionalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Hidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CycleId;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsCycleRank();
};

