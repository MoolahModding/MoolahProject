#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserStatItemCreatedPayload.h"
#include "AccelByteModelsUserStatItemResetPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUserStatItemResetPayload : public FAccelByteModelsUserStatItemCreatedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsUserStatItemResetPayload();
};

