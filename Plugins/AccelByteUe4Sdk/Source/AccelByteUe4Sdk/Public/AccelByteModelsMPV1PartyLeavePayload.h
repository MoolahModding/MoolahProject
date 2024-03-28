#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMPV1PartyJoinedPayload.h"
#include "AccelByteModelsMPV1PartyLeavePayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMPV1PartyLeavePayload : public FAccelByteModelsMPV1PartyJoinedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsMPV1PartyLeavePayload();
};

