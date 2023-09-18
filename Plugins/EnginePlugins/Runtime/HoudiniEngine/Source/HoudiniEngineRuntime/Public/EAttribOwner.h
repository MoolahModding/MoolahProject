#pragma once
#include "CoreMinimal.h"
#include "EAttribOwner.generated.h"

UENUM()
enum class EAttribOwner : int8 {
    Invalid = -0x1,
    Vertex,
    Point,
    Prim,
    Detail,
};

