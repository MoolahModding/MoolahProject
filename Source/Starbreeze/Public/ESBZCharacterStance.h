#pragma once
#include "CoreMinimal.h"
#include "ESBZCharacterStance.generated.h"

UENUM(BlueprintType)
enum class ESBZCharacterStance : uint8 {
    Neutral,
    Suspicious,
    Investigate,
    Stealth,
    Combat,
    Panic,
    Hostage,
    HumanShieldInstigator,
    HumanShieldVictim,
    DownedDefeated,
    Impaired,
    Last,
    First = 0x0,
};

