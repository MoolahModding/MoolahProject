#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsEntitlementUpdate.h"
#include "EAccelByteEntitlementUpdatedAction.h"
#include "AccelByteModelsEntitlementUpdatedNotification.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsEntitlementUpdatedNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteEntitlementUpdatedAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsEntitlementUpdate> Data;
    
    FAccelByteModelsEntitlementUpdatedNotification();
};

