#pragma once
#include "CoreMinimal.h"
#include "EP2PConnectionType.generated.h"

UENUM(BlueprintType)
enum class EP2PConnectionType : uint8 {
    None,
    Host,
    Srflx,
    Prflx,
    Relay,
};

