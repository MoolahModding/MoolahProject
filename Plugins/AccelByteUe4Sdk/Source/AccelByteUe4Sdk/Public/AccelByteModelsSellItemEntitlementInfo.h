#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsCreditSummary.h"
#include "AccelByteModelsEntitlementInfo.h"
#include "AccelByteModelsSellItemEntitlementInfo.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSellItemEntitlementInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsCreditSummary> CreditSummaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsEntitlementInfo EntitlementInfo;
    
    FAccelByteModelsSellItemEntitlementInfo();
};

