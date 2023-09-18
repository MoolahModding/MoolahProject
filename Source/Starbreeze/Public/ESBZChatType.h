#pragma once
#include "CoreMinimal.h"
#include "ESBZChatType.generated.h"

UENUM(BlueprintType)
enum class ESBZChatType : uint8 {
    Party,
    Lobby,
    Whisper,
    System,
};

