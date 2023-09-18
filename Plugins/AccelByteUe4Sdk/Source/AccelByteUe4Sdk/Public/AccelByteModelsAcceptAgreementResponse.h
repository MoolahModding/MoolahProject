#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAcceptAgreementResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsAcceptAgreementResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Proceed;
    
    FAccelByteModelsAcceptAgreementResponse();
};

