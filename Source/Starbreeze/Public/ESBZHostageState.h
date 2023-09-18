#pragma once
#include "CoreMinimal.h"
#include "ESBZHostageState.generated.h"

UENUM(BlueprintType)
enum class ESBZHostageState : uint8 {
    None,
    WantsToGoUpFromGround,
    DownOnGround,
    HogTied = 0x4,
    Trade = 0x8,
    Follow = 0x10,
    Released = 0x20,
};

