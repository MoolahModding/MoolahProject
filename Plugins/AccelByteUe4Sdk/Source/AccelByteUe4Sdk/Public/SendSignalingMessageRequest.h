#pragma once
#include "CoreMinimal.h"
#include "SendSignalingMessageRequest.generated.h"

USTRUCT(BlueprintType)
struct FSendSignalingMessageRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    ACCELBYTEUE4SDK_API FSendSignalingMessageRequest();
};

