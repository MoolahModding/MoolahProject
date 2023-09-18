#pragma once
#include "CoreMinimal.h"
#include "SBZBlockedPlayers.h"
#include "SBZPlatformsBlockedPlayersInfo.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlatformsBlockedPlayersInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBlockedPlayers> PlatformBlockedPlayers;
    
    FSBZPlatformsBlockedPlayersInfo();
};

