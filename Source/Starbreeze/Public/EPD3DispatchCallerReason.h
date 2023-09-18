#pragma once
#include "CoreMinimal.h"
#include "EPD3DispatchCallerReason.generated.h"

UENUM(BlueprintType)
enum class EPD3DispatchCallerReason : uint8 {
    Criminal,
    DeadBody,
    Hostage,
    Object,
    Gunfire,
    Suspect,
    Hostile,
    GenericAlarm,
    GenericSearch,
    Escaped,
    Cuffed,
    UnlockedGate,
    Sabotage,
    MAX,
    Default = GenericAlarm,
};

