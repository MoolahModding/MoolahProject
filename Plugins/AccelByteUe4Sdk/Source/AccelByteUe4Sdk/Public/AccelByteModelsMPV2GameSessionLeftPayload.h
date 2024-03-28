#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMPV2GameSessionCreatedPayload.h"
#include "AccelByteModelsMPV2GameSessionLeftPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsMPV2GameSessionLeftPayload : public FAccelByteModelsMPV2GameSessionCreatedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsMPV2GameSessionLeftPayload();
};

