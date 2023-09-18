#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLobbySessionId.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsLobbySessionId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbySessionID;
    
    FAccelByteModelsLobbySessionId();
};

