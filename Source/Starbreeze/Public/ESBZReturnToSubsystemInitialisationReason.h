#pragma once
#include "CoreMinimal.h"
#include "ESBZReturnToSubsystemInitialisationReason.generated.h"

UENUM(BlueprintType)
enum class ESBZReturnToSubsystemInitialisationReason : uint8 {
    Default,
    UserChange,
};

