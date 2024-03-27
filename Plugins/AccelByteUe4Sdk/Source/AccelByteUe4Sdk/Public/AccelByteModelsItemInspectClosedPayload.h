#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsItemInspectOpenedPayload.h"
#include "AccelByteModelsItemInspectClosedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsItemInspectClosedPayload : public FAccelByteModelsItemInspectOpenedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsItemInspectClosedPayload();
};

