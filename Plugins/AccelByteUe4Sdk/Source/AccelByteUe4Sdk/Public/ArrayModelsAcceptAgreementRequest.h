#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAcceptAgreementRequest.h"
#include "ArrayModelsAcceptAgreementRequest.generated.h"

USTRUCT(BlueprintType)
struct FArrayModelsAcceptAgreementRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsAcceptAgreementRequest> Content;
    
    ACCELBYTEUE4SDK_API FArrayModelsAcceptAgreementRequest();
};

