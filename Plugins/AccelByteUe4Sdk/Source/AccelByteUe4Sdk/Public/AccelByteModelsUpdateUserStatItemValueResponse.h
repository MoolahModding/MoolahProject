#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUpdateUserStatItemValueResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUpdateUserStatItemValueResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    FAccelByteModelsUpdateUserStatItemValueResponse();
};

