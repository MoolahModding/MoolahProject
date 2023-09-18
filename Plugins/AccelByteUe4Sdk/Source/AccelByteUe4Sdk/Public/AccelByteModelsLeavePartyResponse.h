#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLobbyBaseResponse.h"
#include "AccelByteModelsLeavePartyResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsLeavePartyResponse : public FAccelByteModelsLobbyBaseResponse {
    GENERATED_BODY()
public:
    FAccelByteModelsLeavePartyResponse();
};

