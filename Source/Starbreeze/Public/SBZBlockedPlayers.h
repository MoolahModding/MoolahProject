#pragma once
#include "CoreMinimal.h"
#include "SBZBlockedPlayer.h"
#include "SBZBlockedPlayers.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZBlockedPlayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBlockedPlayer> BlockedPlayers;
    
    FSBZBlockedPlayers();
};

