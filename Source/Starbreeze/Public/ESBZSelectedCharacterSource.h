#pragma once
#include "CoreMinimal.h"
#include "ESBZSelectedCharacterSource.generated.h"

UENUM(BlueprintType)
enum class ESBZSelectedCharacterSource : uint8 {
    PreferredCharacters,
    InventoryCharacters,
};

