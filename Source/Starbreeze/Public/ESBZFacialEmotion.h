#pragma once
#include "CoreMinimal.h"
#include "ESBZFacialEmotion.generated.h"

UENUM(BlueprintType)
enum class ESBZFacialEmotion : uint8 {
    Invalid,
    Anger,
    Fear,
    Disgust,
    Happiness,
    Sadness,
    Surprise,
    Contempt,
    Neutral,
    Effort,
    Pain,
    Drunk,
    Suspicious,
    Tough,
    Rage,
    HumanShieldVictim,
    Sleep,
};

