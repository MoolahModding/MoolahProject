#pragma once
#include "CoreMinimal.h"
#include "ESBZFramerateMode.generated.h"

UENUM()
enum class ESBZFramerateMode : int32 {
    Performance,
    Quality,
    Invalid = -1,
};

