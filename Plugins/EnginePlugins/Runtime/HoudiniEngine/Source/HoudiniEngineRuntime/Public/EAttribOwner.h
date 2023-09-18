#pragma once
#include "CoreMinimal.h"
#include "EAttribOwner.generated.h"

UENUM(BlueprintType)
enum class EAttribOwner : uint8 {
    Invalid = 0xFF,
    Vertex = 0,
    Point,
    Prim,
    Detail,
};

