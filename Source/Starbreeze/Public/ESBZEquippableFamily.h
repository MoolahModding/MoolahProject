#pragma once
#include "CoreMinimal.h"
#include "ESBZEquippableFamily.generated.h"

UENUM(BlueprintType)
enum class ESBZEquippableFamily : uint8 {
    HandsFree,
    HandGun1H,
    HandGun2H,
    RiflePistolGrip,
    RifleStraightGrip,
    Melee1H,
    Melee2H,
    DualWield,
    HandheldItem,
    Last,
    First = HandsFree,
};

