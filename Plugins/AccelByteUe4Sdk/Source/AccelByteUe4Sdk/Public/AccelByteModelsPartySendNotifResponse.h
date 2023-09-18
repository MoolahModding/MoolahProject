#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLobbyBaseResponse.h"
#include "AccelByteModelsPartySendNotifResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPartySendNotifResponse : public FAccelByteModelsLobbyBaseResponse {
    GENERATED_BODY()
public:
    FAccelByteModelsPartySendNotifResponse();
};

