#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "JwkSet.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FJwkSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJsonObjectWrapper> keys;
    
    FJwkSet();
};

