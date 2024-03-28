#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChatV2TopicJoinedPayload.h"
#include "AccelByteModelsChatV2TopicQuitPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChatV2TopicQuitPayload : public FAccelByteModelsChatV2TopicJoinedPayload {
    GENERATED_BODY()
public:
    FAccelByteModelsChatV2TopicQuitPayload();
};

