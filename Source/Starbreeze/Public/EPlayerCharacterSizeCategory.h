#pragma once
#include "CoreMinimal.h"
#include "EPlayerCharacterSizeCategory.generated.h"

UENUM(BlueprintType)
enum class EPlayerCharacterSizeCategory : uint8 {
    MaleAverage,
    MaleHeavy,
    MaleMuscular,
    Female,
    Count,
};

