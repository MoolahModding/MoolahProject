#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSellUserEntitlementRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSellUserEntitlementRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequestId;
    
    FAccelByteModelsSellUserEntitlementRequest();
};

