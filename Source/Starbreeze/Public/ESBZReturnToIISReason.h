#pragma once
#include "CoreMinimal.h"
#include "ESBZReturnToIISReason.generated.h"

UENUM(BlueprintType)
enum class ESBZReturnToIISReason : uint8 {
    NoError,
    ReturnFromSuspension,
    LoggedOut,
    SwitchedUser,
    LostConnectionToTheInternet,
    LoggedOutAmbiguously,
};

