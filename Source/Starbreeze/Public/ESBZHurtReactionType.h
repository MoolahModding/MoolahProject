#pragma once
#include "CoreMinimal.h"
#include "ESBZHurtReactionType.generated.h"

UENUM(BlueprintType)
enum class ESBZHurtReactionType : uint8 {
    Hurt,
    Death,
    SprintForwardHurt,
    SprintForwardDeath,
    ExplosionHurt,
    ExplosionDeath,
    NeutralHurt,
    NeutralDeath,
    NeutralSprintForwardHurt,
    NeutralSprintForwardDeath,
    NeutralExplosionHurt,
    NeutralExplosionDeath,
    BracedHurt,
    BracedDeath,
    BracedSprintForwardHurt,
    BracedSprintForwardDeath,
    BracedExplosionHurt,
    BracedExplosionDeath,
    NeutralBracedHurt,
    NeutralBracedDeath,
    NeutralBracedSprintForwardHurt,
    NeutralBracedSprintForwardDeath,
    NeutralBracedExplosionHurt,
    NeutralBracedExplosionDeath,
    MAX,
};

