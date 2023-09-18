#pragma once
#include "CoreMinimal.h"
#include "SendPartyMessageRequest.generated.h"

USTRUCT(BlueprintType)
struct FSendPartyMessageRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    ACCELBYTEUE4SDK_API FSendPartyMessageRequest();
};

