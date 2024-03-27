#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2GameSessionEndedEvent.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSessionEndedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TextChat;
    
    FAccelByteModelsV2GameSessionEndedEvent();
};

