#pragma once
#include "CoreMinimal.h"
#include "EHoudiniFolderParameterType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniFolderParameterType : uint8 {
    Invalid,
    Collapsible,
    Simple,
    Tabs,
    Radio,
    Other,
};

