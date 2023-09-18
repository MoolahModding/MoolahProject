#pragma once
#include "CoreMinimal.h"
#include "LobbyMessages.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FLobbyMessages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CodeName;
    
    FLobbyMessages();
};

