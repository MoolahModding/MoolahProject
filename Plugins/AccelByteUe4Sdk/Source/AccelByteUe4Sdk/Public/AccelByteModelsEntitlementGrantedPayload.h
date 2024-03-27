#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsEntitlementGrantData.h"
#include "AccelByteModelsPredefinedEvent.h"
#include "AccelByteModelsEntitlementGrantedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsEntitlementGrantedPayload : public FAccelByteModelsPredefinedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsEntitlementGrantData> Entitlements;
    
    FAccelByteModelsEntitlementGrantedPayload();
};

