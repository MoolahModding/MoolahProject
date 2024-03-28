#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsCreditSummaryEventPayload.h"
#include "AccelByteModelsEntitlementSummaryEventPayload.h"
#include "AccelByteModelsPredefinedEvent.h"
#include "AccelByteModelsSubscriptionSummaryEventPayload.h"
#include "AccelByteModelsItemFulfilledPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsItemFulfilledPayload : public FAccelByteModelsPredefinedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsEntitlementSummaryEventPayload> EntitlementSummaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsCreditSummaryEventPayload> CreditSummaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsSubscriptionSummaryEventPayload> SubscriptionSummaries;
    
    FAccelByteModelsItemFulfilledPayload();
};

