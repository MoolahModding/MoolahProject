#pragma once
#include "CoreMinimal.h"
#include "EAttribStorageType.generated.h"

UENUM()
enum class EAttribStorageType : int8 {
    Invalid = -1,
    INT = 0,
    INT64,
    FLOAT,
    FLOAT64,
    STRING,
};

