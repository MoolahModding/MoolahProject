#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserStatItemCreatedPayload.h"
#include "AccelByteModelsUserStatItemGetItemsPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUserStatItemGetItemsPayload : public FAccelByteModelsUserStatItemCreatedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsUserStatItemGetItemsPayload();
};

