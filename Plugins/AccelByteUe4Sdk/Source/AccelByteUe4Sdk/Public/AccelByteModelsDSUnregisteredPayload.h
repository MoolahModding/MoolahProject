#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDSRegisteredPayload.h"
#include "AccelByteModelsDSUnregisteredPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDSUnregisteredPayload : public FAccelByteModelsDSRegisteredPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsDSUnregisteredPayload();
};

