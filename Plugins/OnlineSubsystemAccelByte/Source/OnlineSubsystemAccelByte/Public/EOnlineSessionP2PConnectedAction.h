#pragma once
#include "CoreMinimal.h"
#include "EOnlineSessionP2PConnectedAction.generated.h"

UENUM(BlueprintType)
enum class EOnlineSessionP2PConnectedAction : uint8 {
    Join,
    Update,
};

