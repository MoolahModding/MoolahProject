#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDSMSession.h"
#include "AccelByteModelsServerCreateSessionResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsServerCreateSessionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsDSMSession Session;
    
    FAccelByteModelsServerCreateSessionResponse();
};

