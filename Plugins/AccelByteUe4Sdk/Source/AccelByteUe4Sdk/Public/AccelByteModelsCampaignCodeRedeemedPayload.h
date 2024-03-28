#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsItemFulfilledPayload.h"
#include "AccelByteModelsCampaignCodeRedeemedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsCampaignCodeRedeemedPayload : public FAccelByteModelsItemFulfilledPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Code;
    
    FAccelByteModelsCampaignCodeRedeemedPayload();
};

