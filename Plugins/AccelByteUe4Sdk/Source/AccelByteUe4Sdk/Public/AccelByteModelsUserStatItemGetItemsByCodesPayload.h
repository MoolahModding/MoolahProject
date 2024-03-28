#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserStatItemCreatedPayload.h"
#include "AccelByteModelsUserStatItemGetItemsByCodesPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUserStatItemGetItemsByCodesPayload : public FAccelByteModelsUserStatItemCreatedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsUserStatItemGetItemsByCodesPayload();
};

