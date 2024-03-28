#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDSHubConnectedPayload.h"
#include "AccelByteModelsDSHubDisconnectedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDSHubDisconnectedPayload : public FAccelByteModelsDSHubConnectedPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatusCode;
    
    FAccelByteModelsDSHubDisconnectedPayload();
};

