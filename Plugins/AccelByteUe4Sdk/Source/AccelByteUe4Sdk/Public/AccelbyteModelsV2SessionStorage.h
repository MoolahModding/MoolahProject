#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "AccelbyteModelsV2SessionStorage.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelbyteModelsV2SessionStorage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Leader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FJsonObjectWrapper> Member;
    
    FAccelbyteModelsV2SessionStorage();
};

