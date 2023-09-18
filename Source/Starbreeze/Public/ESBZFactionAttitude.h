#pragma once
#include "CoreMinimal.h"
#include "ESBZFactionAttitude.generated.h"

UENUM(BlueprintType)
enum class ESBZFactionAttitude : uint8 {
    Invalid,
    Friendly,
    Neutral,
    Hostile,
};

