#pragma once
#include "CoreMinimal.h"
#include "ESBZInputBindingType.generated.h"

UENUM(BlueprintType)
enum class ESBZInputBindingType : uint8 {
    AxisBinding,
    ActionBinding,
};

