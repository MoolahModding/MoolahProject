#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChatV2TopicJoinedPayload.h"
#include "AccelByteModelsChatV2TopicUserRemovedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChatV2TopicUserRemovedPayload : public FAccelByteModelsChatV2TopicJoinedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsChatV2TopicUserRemovedPayload();
};

