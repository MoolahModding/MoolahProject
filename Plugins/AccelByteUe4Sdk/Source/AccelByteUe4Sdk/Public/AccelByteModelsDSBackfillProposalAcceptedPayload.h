#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDSBackfillProposalReceivedPayload.h"
#include "AccelByteModelsDSBackfillProposalAcceptedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDSBackfillProposalAcceptedPayload : public FAccelByteModelsDSBackfillProposalReceivedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsDSBackfillProposalAcceptedPayload();
};

