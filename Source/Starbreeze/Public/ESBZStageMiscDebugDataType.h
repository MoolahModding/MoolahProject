#pragma once
#include "CoreMinimal.h"
#include "ESBZStageMiscDebugDataType.generated.h"

UENUM()
enum class ESBZStageMiscDebugDataType : uint16 {
    Name,
    String,
    Bool,
    Int32,
    Float,
    Transform,
    Line,
    Vector,
    Sphere,
    Capsule,
};

