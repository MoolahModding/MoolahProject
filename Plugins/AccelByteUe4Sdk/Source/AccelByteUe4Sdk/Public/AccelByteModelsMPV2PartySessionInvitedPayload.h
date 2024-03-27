#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMPV2PartySessionCreatedPayload.h"
#include "AccelByteModelsMPV2PartySessionInvitedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMPV2PartySessionInvitedPayload : public FAccelByteModelsMPV2PartySessionCreatedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsMPV2PartySessionInvitedPayload();
};

