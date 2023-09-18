#pragma once
#include "CoreMinimal.h"
#include "EAccelByteItemType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteItemType : uint8 {
    NONE,
    APP,
    COINS,
    INGAMEITEM,
    BUNDLE,
    CODE,
    SUBSCRIPTION,
    SEASON,
    MEDIA,
    OPTIONBOX,
    EXTENSION,
    LOOTBOX,
};

