#pragma once
#include "CoreMinimal.h"
#include "PlatformUserIdMap.h"
#include "BulkPlatformUserIdResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FBulkPlatformUserIdResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlatformUserIdMap> UserIdPlatforms;
    
    FBulkPlatformUserIdResponse();
};

