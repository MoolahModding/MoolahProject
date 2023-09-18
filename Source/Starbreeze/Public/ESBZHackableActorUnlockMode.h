#pragma once
#include "CoreMinimal.h"
#include "ESBZHackableActorUnlockMode.generated.h"

UENUM(BlueprintType)
enum class ESBZHackableActorUnlockMode : uint8 {
    NoSecurity,
    HackUnlock,
    KeyItemUnlock,
};

