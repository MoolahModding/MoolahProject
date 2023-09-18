#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsOwnershipToken.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsOwnershipToken {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OwnershipToken;
    
    FAccelByteModelsOwnershipToken();
};

