#pragma once
#include "CoreMinimal.h"
#include "ESBZCookingState.generated.h"

UENUM(BlueprintType)
enum class ESBZCookingState : uint8 {
    Inactive,
    WaitingForIngredients,
    Cooking,
    UnderCooked,
    Cooked,
    OverCooked,
    Sabotaged,
    Destroyed,
};

