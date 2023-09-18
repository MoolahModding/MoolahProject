#pragma once
#include "CoreMinimal.h"
#include "ESBZFireMode.generated.h"

UENUM(BlueprintType)
enum class ESBZFireMode : uint8 {
    Single,
    Burst,
    Auto,
};

