#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaymentSuccededPayload.h"
#include "AccelByteModelsPaymentFailedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPaymentFailedPayload : public FAccelByteModelsPaymentSuccededPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsPaymentFailedPayload();
};

