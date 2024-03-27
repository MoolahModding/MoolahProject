#pragma once
#include "CoreMinimal.h"
#include "EHttpCacheType.generated.h"

UENUM(BlueprintType)
enum class EHttpCacheType : uint8 {
    UNKNOWN,
    STORAGE,
    MEMORY,
};

