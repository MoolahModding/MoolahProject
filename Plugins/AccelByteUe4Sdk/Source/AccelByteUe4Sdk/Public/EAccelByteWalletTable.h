#pragma once
#include "CoreMinimal.h"
#include "EAccelByteWalletTable.generated.h"

UENUM(BlueprintType)
enum class EAccelByteWalletTable : uint8 {
    Playstation,
    Xbox,
    Steam,
    Epic,
    IOS,
    GooglePlay,
    Twitch,
    System,
    Nintendo,
    Other,
};

