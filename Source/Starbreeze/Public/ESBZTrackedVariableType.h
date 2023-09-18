#pragma once
#include "CoreMinimal.h"
#include "ESBZTrackedVariableType.generated.h"

UENUM(BlueprintType)
enum class ESBZTrackedVariableType : uint8 {
    Property,
    Transform,
};

