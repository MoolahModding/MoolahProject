#pragma once
#include "CoreMinimal.h"
#include "ESBZFramerateLimit.generated.h"

UENUM()
enum class ESBZFramerateLimit {
    _30 = 0x1E,
    _60 = 0x3C,
    _120 = 0x78,
    _144 = 0x90,
    _160 = 0xA0,
    _165 = 0xA5,
    _180 = 0xB4,
    _200 = 0xC8,
    _240 = 0xF0,
    _360 = 0x168,
    Unlimited = 0x0,
    Invalid = -0x1,
};

