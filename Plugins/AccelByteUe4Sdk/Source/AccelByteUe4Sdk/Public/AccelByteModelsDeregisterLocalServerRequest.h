#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDeregisterLocalServerRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDeregisterLocalServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FAccelByteModelsDeregisterLocalServerRequest();
};

