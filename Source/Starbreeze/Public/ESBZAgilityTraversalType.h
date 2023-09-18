#pragma once
#include "CoreMinimal.h"
#include "ESBZAgilityTraversalType.generated.h"

UENUM(BlueprintType)
enum class ESBZAgilityTraversalType : uint8 {
    VaultLowSlow,
    VaultLowFast,
    VaultMediumSlow,
    VaultMediumFast,
    VaultHighSlow,
    VaultHighFast,
    MantleLowSlow,
    MantleLowFast,
    MantleMediumSlow,
    MantleMediumFast,
    MantleHighSlow,
    MantleHighFast,
};

