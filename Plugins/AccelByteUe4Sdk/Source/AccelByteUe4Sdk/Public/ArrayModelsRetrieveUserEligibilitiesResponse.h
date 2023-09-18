#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsRetrieveUserEligibilitiesResponse.h"
#include "ArrayModelsRetrieveUserEligibilitiesResponse.generated.h"

USTRUCT(BlueprintType)
struct FArrayModelsRetrieveUserEligibilitiesResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsRetrieveUserEligibilitiesResponse> Content;
    
    ACCELBYTEUE4SDK_API FArrayModelsRetrieveUserEligibilitiesResponse();
};

