#pragma once
#include "CoreMinimal.h"
#include "ESBZReplaySpectatorView.generated.h"

UENUM(BlueprintType)
enum class ESBZReplaySpectatorView : uint8 {
    FirstPersonView,
    ThirdPersonView,
    FreeCameraView,
};

