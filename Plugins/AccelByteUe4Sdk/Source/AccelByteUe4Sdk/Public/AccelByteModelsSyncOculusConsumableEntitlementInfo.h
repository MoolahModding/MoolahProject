#pragma once
#include "CoreMinimal.h"
#include "EAccelByteEntitlementIAPOrderStatus.h"
#include "EAccelByteEntitlementItemIdentityType.h"
#include "AccelByteModelsSyncOculusConsumableEntitlementInfo.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSyncOculusConsumableEntitlementInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TransactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OculusItemSku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteEntitlementItemIdentityType ItemIdentityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemIdentity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteEntitlementIAPOrderStatus IAPOrderStatus;
    
    FAccelByteModelsSyncOculusConsumableEntitlementInfo();
};

