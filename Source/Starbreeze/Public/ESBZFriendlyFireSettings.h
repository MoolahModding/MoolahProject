#pragma once
#include "CoreMinimal.h"
#include "ESBZFriendlyFireSettings.generated.h"

UENUM(BlueprintType)
enum class ESBZFriendlyFireSettings : uint8 {
    NoOverride,
    Allowed,
    NotAllowed,
};

