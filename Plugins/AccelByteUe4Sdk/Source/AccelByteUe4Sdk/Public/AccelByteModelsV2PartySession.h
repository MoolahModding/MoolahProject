#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2BaseSession.h"
#include "AccelByteModelsV2PartySession.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2PartySession : public FAccelByteModelsV2BaseSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Code;
    
    FAccelByteModelsV2PartySession();
};

