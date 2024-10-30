#pragma once
#include "CoreMinimal.h"
#include "ESBZVoiceSessionDomain.generated.h"

UENUM(BlueprintType)
enum class ESBZVoiceSessionDomain : uint8 {
    Unknown,
    Lobby,
    Match,
    Default = Unknown,
};

