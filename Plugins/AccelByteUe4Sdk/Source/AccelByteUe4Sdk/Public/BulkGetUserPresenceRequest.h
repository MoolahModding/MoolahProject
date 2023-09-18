#pragma once
#include "CoreMinimal.h"
#include "BulkGetUserPresenceRequest.generated.h"

USTRUCT(BlueprintType)
struct FBulkGetUserPresenceRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UserIds;
    
    ACCELBYTEUE4SDK_API FBulkGetUserPresenceRequest();
};

