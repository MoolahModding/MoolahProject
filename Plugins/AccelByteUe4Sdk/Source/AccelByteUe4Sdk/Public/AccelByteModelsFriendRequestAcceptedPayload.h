#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsFriendRequestSentPayload.h"
#include "AccelByteModelsFriendRequestAcceptedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsFriendRequestAcceptedPayload : public FAccelByteModelsFriendRequestSentPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsFriendRequestAcceptedPayload();
};

