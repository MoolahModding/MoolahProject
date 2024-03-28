#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMPV1PartyJoinedPayload.h"
#include "AccelByteModelsMPV1PartyInvitePayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMPV1PartyInvitePayload : public FAccelByteModelsMPV1PartyJoinedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsMPV1PartyInvitePayload();
};

