#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserAgreementAcceptedPayload.h"
#include "AccelByteModelsUserAgreementNotAcceptedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUserAgreementNotAcceptedPayload : public FAccelByteModelsUserAgreementAcceptedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsUserAgreementNotAcceptedPayload();
};

