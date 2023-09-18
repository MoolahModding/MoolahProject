#pragma once
#include "CoreMinimal.h"
#include "ESBZVoiceEvent.generated.h"

UENUM(BlueprintType)
enum class ESBZVoiceEvent : uint8 {
    CharacterEvent,
    WheelEvent,
    MAX,
};

