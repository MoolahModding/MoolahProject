#pragma once
#include "CoreMinimal.h"
#include "ESBZNotificationType.generated.h"

UENUM(BlueprintType)
enum class ESBZNotificationType : uint8 {
    NotificationError,
    NotificationWarning,
    NotificationNormal,
    NotificationEmpty,
};

