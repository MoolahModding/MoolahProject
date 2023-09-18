#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2PartySession.h"
#include "AccelByteModelsV2QueryPartiesResponse.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsV2QueryPartiesResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2PartySession> Data;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsV2QueryPartiesResponse();
};

