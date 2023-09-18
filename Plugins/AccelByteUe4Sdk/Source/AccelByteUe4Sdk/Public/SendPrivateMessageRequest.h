#pragma once
#include "CoreMinimal.h"
#include "SendPrivateMessageRequest.generated.h"

USTRUCT(BlueprintType)
struct FSendPrivateMessageRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    ACCELBYTEUE4SDK_API FSendPrivateMessageRequest();
};

