#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2GameSessionUserKickedEvent.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSessionUserKickedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionID;
    
    FAccelByteModelsV2GameSessionUserKickedEvent();
};

