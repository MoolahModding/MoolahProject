#pragma once
#include "CoreMinimal.h"
#include "ESBZSpawnRotationMethod.generated.h"

UENUM(BlueprintType)
enum class ESBZSpawnRotationMethod : uint8 {
    SpawnRotation,
    SpecificHeadingAngle,
};

