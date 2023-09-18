#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionBrowserJoinSessionRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSessionBrowserJoinSessionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
    FAccelByteModelsSessionBrowserJoinSessionRequest();
};

