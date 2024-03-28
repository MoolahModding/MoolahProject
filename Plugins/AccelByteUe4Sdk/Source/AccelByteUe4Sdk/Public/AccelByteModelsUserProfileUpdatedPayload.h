#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserProfileCreatedPayload.h"
#include "AccelByteModelsUserProfileUpdatedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUserProfileUpdatedPayload : public FAccelByteModelsUserProfileCreatedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsUserProfileUpdatedPayload();
};

