#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2GameSessionBaseRequest.h"
#include "AccelByteModelsV2GameSessionCreateRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSessionCreateRequest : public FAccelByteModelsV2GameSessionBaseRequest {
    GENERATED_BODY()
public:
    FAccelByteModelsV2GameSessionCreateRequest();
};

