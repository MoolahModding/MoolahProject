#pragma once
#include "CoreMinimal.h"
#include "ESBZFramerateLimit.generated.h"

UENUM()
enum class ESBZFramerateLimit {
    _30 = 30,
    _60 = 60,
    _120 = 120,
    _144 = 144,
    _160 = 160,
    _165 = 165,
    _180 = 180,
    _200 = 200,
    _240 = 240,
    _360 = 360,
    Unlimited = 0,
    Invalid = -1,
};

