#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUGCRequest.h"
#include "AccelByteModelsUGCUpdateRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUGCUpdateRequest : public FAccelByteModelsUGCRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateContentFile;
    
    FAccelByteModelsUGCUpdateRequest();
};

