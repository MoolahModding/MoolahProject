#pragma once
#include "CoreMinimal.h"
#include "ESBZAgilityType.generated.h"

UENUM(BlueprintType)
enum class ESBZAgilityType : uint8 {
    JumpingDown,
    JumpingDownRolling,
    Vaulting,
    Mantling,
    GrapplingHook,
    RappellingThroughWindow,
    Rappelling,
    RappellingFromHelicopter,
    SlideUnder,
    SlideUnderFallDown,
    ClimbOver,
    ClimbOnTop,
    JumpingStraight,
    CeilingVent,
    WallRunningRight,
    WallRunningLeft,
    ExitFromCarSide,
    ExitFromCarBack,
    SpawnProneToStand,
    SpawnCrouchToStand,
    Invalid,
};

