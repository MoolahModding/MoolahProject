#pragma once
#include "CoreMinimal.h"
#include "EAccelByteEntitlementsNotificationType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteEntitlementsNotificationType : uint8 {
    EntitlementUpdated,
    Unknown,
};

