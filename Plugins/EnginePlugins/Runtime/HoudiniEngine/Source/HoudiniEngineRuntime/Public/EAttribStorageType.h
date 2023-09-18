#pragma once
#include "CoreMinimal.h"
#include "EAttribStorageType.generated.h"

UENUM()
enum class EAttribStorageType : uint8 {
    Invalid = 0xFF,
    INT = 0,
    INT64,
    FLOAT,
    FLOAT64,
    STRING,
};

