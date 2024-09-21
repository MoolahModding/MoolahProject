#pragma once
#include "CoreMinimal.h"
#include "ESBZSlotStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZSlotStatus : uint8 {
    Initializing,
    PreMatch,
    Connecting,
    JobOverview,
    JobOverviewReady,
    ActionPhase,
    ResultScreen,
    Disconnected,
    Default = Initializing,
};

