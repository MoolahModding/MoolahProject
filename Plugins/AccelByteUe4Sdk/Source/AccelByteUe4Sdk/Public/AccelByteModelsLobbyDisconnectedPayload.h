#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLobbyConnectedPayload.h"
#include "AccelByteModelsLobbyDisconnectedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsLobbyDisconnectedPayload : public FAccelByteModelsLobbyConnectedPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatusCode;
    
    FAccelByteModelsLobbyDisconnectedPayload();
};

