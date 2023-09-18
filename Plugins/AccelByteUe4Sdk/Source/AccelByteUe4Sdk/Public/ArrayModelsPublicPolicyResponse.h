#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPublicPolicy.h"
#include "ArrayModelsPublicPolicyResponse.generated.h"

USTRUCT(BlueprintType)
struct FArrayModelsPublicPolicyResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsPublicPolicy> Content;
    
    ACCELBYTEUE4SDK_API FArrayModelsPublicPolicyResponse();
};

