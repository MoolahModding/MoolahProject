#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2PartyUserKickedEvent.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2PartyUserKickedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartyID;
    
    FAccelByteModelsV2PartyUserKickedEvent();
};

