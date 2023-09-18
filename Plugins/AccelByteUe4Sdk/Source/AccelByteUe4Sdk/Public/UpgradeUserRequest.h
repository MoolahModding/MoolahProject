#pragma once
#include "CoreMinimal.h"
#include "UpgradeUserRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FUpgradeUserRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Temporary_session_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Expires_in;
    
    FUpgradeUserRequest();
};

