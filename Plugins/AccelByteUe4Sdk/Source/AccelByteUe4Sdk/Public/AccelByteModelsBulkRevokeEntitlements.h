#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkRevokeEntitlements.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsBulkRevokeEntitlements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Affected;
    
    FAccelByteModelsBulkRevokeEntitlements();
};

