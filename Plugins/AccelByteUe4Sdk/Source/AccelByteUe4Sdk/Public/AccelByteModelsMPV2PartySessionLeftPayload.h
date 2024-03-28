#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMPV2PartySessionCreatedPayload.h"
#include "AccelByteModelsMPV2PartySessionLeftPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMPV2PartySessionLeftPayload : public FAccelByteModelsMPV2PartySessionCreatedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsMPV2PartySessionLeftPayload();
};

