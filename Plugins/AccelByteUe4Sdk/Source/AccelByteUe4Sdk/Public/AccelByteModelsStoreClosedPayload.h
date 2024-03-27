#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsStoreOpenedPayload.h"
#include "AccelByteModelsStoreClosedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsStoreClosedPayload : public FAccelByteModelsStoreOpenedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsStoreClosedPayload();
};

