#pragma once
#include "CoreMinimal.h"
#include "ESettingsEnvironment.generated.h"

UENUM(BlueprintType)
enum class ESettingsEnvironment : uint8 {
    Development,
    Certification,
    Production,
    Sandbox,
    Integration,
    QA,
    Default,
};

