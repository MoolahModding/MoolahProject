#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserStatItemCreatedPayload.h"
#include "AccelByteModelsUserStatItemDeletedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUserStatItemDeletedPayload : public FAccelByteModelsUserStatItemCreatedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsUserStatItemDeletedPayload();
};

