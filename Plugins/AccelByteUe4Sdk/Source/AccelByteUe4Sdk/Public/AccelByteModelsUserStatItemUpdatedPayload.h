#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserStatItemCreatedPayload.h"
#include "AccelByteModelsUserStatItemUpdatedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUserStatItemUpdatedPayload : public FAccelByteModelsUserStatItemCreatedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsUserStatItemUpdatedPayload();
};

