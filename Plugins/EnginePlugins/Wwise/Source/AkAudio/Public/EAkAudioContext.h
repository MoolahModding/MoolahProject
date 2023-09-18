#pragma once
#include "CoreMinimal.h"
#include "EAkAudioContext.generated.h"

UENUM(BlueprintType)
enum class EAkAudioContext : uint8 {
    Foreign,
    GameplayAudio,
    EditorAudio,
    AlwaysActive,
};

