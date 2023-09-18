#pragma once
#include "CoreMinimal.h"
#include "SendChannelMessageRequest.generated.h"

USTRUCT(BlueprintType)
struct FSendChannelMessageRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    ACCELBYTEUE4SDK_API FSendChannelMessageRequest();
};

