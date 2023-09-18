#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLobbyBaseResponse.h"
#include "AccelByteModelsSetOnlineUsersResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSetOnlineUsersResponse : public FAccelByteModelsLobbyBaseResponse {
    GENERATED_BODY()
public:
    FAccelByteModelsSetOnlineUsersResponse();
};

