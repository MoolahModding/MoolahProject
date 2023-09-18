#pragma once
#include "CoreMinimal.h"
#include "EOnlineSessionInfo.generated.h"

UENUM(BlueprintType)
enum class EOnlineSessionInfo : uint8 {
    Initial,
    Terminating,
    Terminated,
    Interrupt,
    Searching,
    SearchCompleted,
    ReservedSlot,
    NoSlots,
    Joining,
    Joined,
    Hosting,
    Host,
    Updating,
    CheckingPrivileges,
    CannotPlayOnline,
    SmartMatching,
    TimedOut,
    Error,
};

