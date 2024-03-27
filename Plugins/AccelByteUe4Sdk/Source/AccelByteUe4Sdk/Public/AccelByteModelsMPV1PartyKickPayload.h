#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMPV1PartyJoinedPayload.h"
#include "AccelByteModelsMPV1PartyKickPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMPV1PartyKickPayload : public FAccelByteModelsMPV1PartyJoinedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsMPV1PartyKickPayload();
};

