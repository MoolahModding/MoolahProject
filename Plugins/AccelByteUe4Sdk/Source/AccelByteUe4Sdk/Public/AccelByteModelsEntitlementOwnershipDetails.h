#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsEntitlementOwnershipDetail.h"
#include "AccelByteModelsEntitlementOwnershipDetails.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsEntitlementOwnershipDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsEntitlementOwnershipDetail> Entitlements;
    
    FAccelByteModelsEntitlementOwnershipDetails();
};

