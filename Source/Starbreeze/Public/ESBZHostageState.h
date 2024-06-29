#pragma once
#include "CoreMinimal.h"
#include "ESBZHostageState.generated.h"

UENUM(BlueprintType)
enum class ESBZHostageState : uint8 {
    None,
    WantsToGoUpFromGround,
    DownOnGround,
    HogTied = 4,
    Trade = 8,
    Follow = 16,
    Released = 32,
};

