#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsFriendRequestSentPayload.h"
#include "AccelByteModelsFriendRequestRejectedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsFriendRequestRejectedPayload : public FAccelByteModelsFriendRequestSentPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsFriendRequestRejectedPayload();
};

