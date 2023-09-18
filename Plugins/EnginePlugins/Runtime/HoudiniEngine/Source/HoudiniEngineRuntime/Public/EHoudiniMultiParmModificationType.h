#pragma once
#include "CoreMinimal.h"
#include "EHoudiniMultiParmModificationType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniMultiParmModificationType : uint8 {
    None,
    Inserted,
    Removed,
    Modified,
};

