#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDSBackfillProposalReceivedPayload.h"
#include "AccelByteModelsDSBackfillProposalRejectedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDSBackfillProposalRejectedPayload : public FAccelByteModelsDSBackfillProposalReceivedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsDSBackfillProposalRejectedPayload();
};

