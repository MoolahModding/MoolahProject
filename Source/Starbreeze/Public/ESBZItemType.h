#pragma once
#include "CoreMinimal.h"
#include "ESBZItemType.generated.h"

UENUM(BlueprintType)
enum class ESBZItemType : uint8 {
    None,
    Consumable,
    Durable,
};

