#pragma once
#include "CoreMinimal.h"
#include "BulkPlatformUserIdRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FBulkPlatformUserIdRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlatformUserIDs;
    
    FBulkPlatformUserIdRequest();
};

