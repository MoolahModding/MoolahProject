#pragma once
#include "CoreMinimal.h"
#include "ETLMVoiceSessionState.generated.h"

UENUM(BlueprintType)
enum class ETLMVoiceSessionState : uint8 {
    ToCreate,
    Creating,
    Created,
    Failed,
    NONE,
};

