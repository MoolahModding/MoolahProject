#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsServerInfo.h"
#include "AccelByteModelsListServerResponse.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsListServerResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsServerInfo> Servers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsListServerResponse();
};

