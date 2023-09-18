#pragma once
#include "CoreMinimal.h"
#include "ESBZStoreItemPlatform.generated.h"

UENUM(BlueprintType)
enum class ESBZStoreItemPlatform : uint8 {
    All,
    Steam,
    XBox,
    PlayStation,
    Epic,
};

