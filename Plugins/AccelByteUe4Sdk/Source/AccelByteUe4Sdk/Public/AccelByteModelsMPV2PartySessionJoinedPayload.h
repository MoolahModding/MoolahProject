#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMPV2PartySessionCreatedPayload.h"
#include "AccelByteModelsMPV2PartySessionJoinedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMPV2PartySessionJoinedPayload : public FAccelByteModelsMPV2PartySessionCreatedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsMPV2PartySessionJoinedPayload();
};

