#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLobbyBaseResponse.h"
#include "AccelByteModelsRefreshTokenResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsRefreshTokenResponse : public FAccelByteModelsLobbyBaseResponse {
    GENERATED_BODY()
public:
    FAccelByteModelsRefreshTokenResponse();
};

