#pragma once
#include "CoreMinimal.h"
#include "ESoundSourceType.generated.h"

UENUM(BlueprintType)
enum class ESoundSourceType : uint8 {
    Static,
    Dynamic,
};

