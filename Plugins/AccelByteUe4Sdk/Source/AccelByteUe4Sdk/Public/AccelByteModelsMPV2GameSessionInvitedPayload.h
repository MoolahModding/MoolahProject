#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMPV2GameSessionCreatedPayload.h"
#include "AccelByteModelsMPV2GameSessionInvitedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMPV2GameSessionInvitedPayload : public FAccelByteModelsMPV2GameSessionCreatedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsMPV2GameSessionInvitedPayload();
};

