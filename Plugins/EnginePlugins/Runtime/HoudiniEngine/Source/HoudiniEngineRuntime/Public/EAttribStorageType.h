#pragma once
#include "CoreMinimal.h"
#include "EAttribStorageType.generated.h"

UENUM()
enum class EAttribStorageType : int8 {
    Invalid = -0x1,
    INT,
    INT64,
    FLOAT,
    FLOAT64,
    STRING,
};

