#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsServerSessionResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsServerSessionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Session_id;
    
    FAccelByteModelsServerSessionResponse();
};

