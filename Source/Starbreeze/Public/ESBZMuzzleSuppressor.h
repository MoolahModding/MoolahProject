#pragma once
#include "CoreMinimal.h"
#include "ESBZMuzzleSuppressor.generated.h"

UENUM(BlueprintType)
enum class ESBZMuzzleSuppressor : uint8 {
    None,
    Small,
    Medium,
    Large,
    MAX,
    Last = Large,
};

