#pragma once
#include "CoreMinimal.h"
#include "StartMatchmakingRequest.generated.h"

USTRUCT(BlueprintType)
struct FStartMatchmakingRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString gameMode;
    
    ACCELBYTEUE4SDK_API FStartMatchmakingRequest();
};

