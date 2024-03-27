#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPredefinedEvent.h"
#include "AccelByteModelsChatV2PersonalTopicCreatedPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChatV2PersonalTopicCreatedPayload : public FAccelByteModelsPredefinedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetUserId;
    
    FAccelByteModelsChatV2PersonalTopicCreatedPayload();
};

