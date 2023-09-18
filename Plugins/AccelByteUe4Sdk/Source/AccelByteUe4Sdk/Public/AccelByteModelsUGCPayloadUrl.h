#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCPayloadUrl.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCPayloadUrl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Url;
    
    FAccelByteModelsUGCPayloadUrl();
};

