#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDSGameClientJoinedPayload.h"
#include "AccelByteModelsDSGameClientLeftPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDSGameClientLeftPayload : public FAccelByteModelsDSGameClientJoinedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsDSGameClientLeftPayload();
};

