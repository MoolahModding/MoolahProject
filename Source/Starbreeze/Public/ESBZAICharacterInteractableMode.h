#pragma once
#include "CoreMinimal.h"
#include "ESBZAICharacterInteractableMode.generated.h"

UENUM(BlueprintType)
enum class ESBZAICharacterInteractableMode : uint8 {
    PickUp,
    HumanShield,
    AnswerPager,
    OrderDownOnGround,
    TieHands,
    OrderFollow,
    TradeHostage,
    KillHumanShield,
    PickUpKilledHumanShield,
    HackerGlitchProtocol,
    None,
    MAX,
};

