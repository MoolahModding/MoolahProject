#pragma once
#include "CoreMinimal.h"
#include "ESBZInputState.generated.h"

UENUM(BlueprintType)
enum class ESBZInputState : uint8 {
    Game,
    UI,
    GameAndUI,
};

