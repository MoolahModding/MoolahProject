#pragma once
#include "CoreMinimal.h"
#include "ESBZRuntimeState.generated.h"

UENUM(BlueprintType)
enum class ESBZRuntimeState : uint8 {
    None,
    HackerAced,
    SecureLoop,
    RoutedPing,
    ScramblerBase,
};

