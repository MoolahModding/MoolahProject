#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsFriendRequestSentPayload.h"
#include "AccelByteModelsFriendRequestCancelledPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsFriendRequestCancelledPayload : public FAccelByteModelsFriendRequestSentPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsFriendRequestCancelledPayload();
};

