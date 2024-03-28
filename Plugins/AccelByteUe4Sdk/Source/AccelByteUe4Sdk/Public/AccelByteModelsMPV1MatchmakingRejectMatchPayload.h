#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMPV1MatchmakingReadyConsentPayload.h"
#include "AccelByteModelsMPV1MatchmakingRejectMatchPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMPV1MatchmakingRejectMatchPayload : public FAccelByteModelsMPV1MatchmakingReadyConsentPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsMPV1MatchmakingRejectMatchPayload();
};

