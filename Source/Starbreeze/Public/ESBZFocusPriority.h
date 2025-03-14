#pragma once
#include "CoreMinimal.h"
#include "ESBZFocusPriority.generated.h"

UENUM(BlueprintType)
enum class ESBZFocusPriority : uint8 {
    FakeDefaultValueSoUnrealCompilesDontUseThis = 0,
    AI = 3,
    Attack,
    Override,
};

