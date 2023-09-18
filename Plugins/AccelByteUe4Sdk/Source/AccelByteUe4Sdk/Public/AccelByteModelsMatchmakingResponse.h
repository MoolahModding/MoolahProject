#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLobbyBaseResponse.h"
#include "AccelByteModelsMatchmakingResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMatchmakingResponse : public FAccelByteModelsLobbyBaseResponse {
    GENERATED_BODY()
public:
    FAccelByteModelsMatchmakingResponse();
};

