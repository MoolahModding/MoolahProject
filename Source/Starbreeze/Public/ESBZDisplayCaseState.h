#pragma once
#include "CoreMinimal.h"
#include "ESBZDisplayCaseState.generated.h"

UENUM(BlueprintType)
enum class ESBZDisplayCaseState : uint8 {
    None,
    Closed,
    Open,
    Cut,
    Broken,
    Lockdown,
};

