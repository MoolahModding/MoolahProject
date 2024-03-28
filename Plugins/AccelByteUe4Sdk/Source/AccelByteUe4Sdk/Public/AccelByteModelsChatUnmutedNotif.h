#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChatUnmutedNotif.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChatUnmutedNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TopicId;
    
    FAccelByteModelsChatUnmutedNotif();
};

