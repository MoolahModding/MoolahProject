#pragma once
#include "CoreMinimal.h"
#include "EHoudiniLandscapeOutputBakeType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniLandscapeOutputBakeType : uint8 {
    Detachment,
    BakeToImage,
    BakeToWorld,
    InValid,
};

