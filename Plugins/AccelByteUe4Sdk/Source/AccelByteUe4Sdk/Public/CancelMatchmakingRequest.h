#pragma once
#include "CoreMinimal.h"
#include "CancelMatchmakingRequest.generated.h"

USTRUCT(BlueprintType)
struct FCancelMatchmakingRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString gameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isTempParty;
    
    ACCELBYTEUE4SDK_API FCancelMatchmakingRequest();
};

