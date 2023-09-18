#pragma once
#include "CoreMinimal.h"
#include "EHoudiniLandscapeExportType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniLandscapeExportType : uint8 {
    Heightfield,
    Mesh,
    Points,
};

