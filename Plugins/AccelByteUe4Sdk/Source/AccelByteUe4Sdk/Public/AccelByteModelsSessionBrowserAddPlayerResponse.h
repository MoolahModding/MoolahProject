#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionBrowserAddPlayerResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSessionBrowserAddPlayerResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Status;
    
    FAccelByteModelsSessionBrowserAddPlayerResponse();
};

