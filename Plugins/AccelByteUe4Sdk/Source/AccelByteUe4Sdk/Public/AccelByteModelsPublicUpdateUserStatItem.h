#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "EAccelByteStatisticUpdateStrategy.h"
#include "AccelByteModelsPublicUpdateUserStatItem.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPublicUpdateUserStatItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteStatisticUpdateStrategy UpdateStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper AdditionalData;
    
    FAccelByteModelsPublicUpdateUserStatItem();
};

