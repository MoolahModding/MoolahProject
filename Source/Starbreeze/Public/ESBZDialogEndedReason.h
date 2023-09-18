#pragma once
#include "CoreMinimal.h"
#include "ESBZDialogEndedReason.generated.h"

UENUM(BlueprintType)
enum class ESBZDialogEndedReason : uint8 {
    Completed,
    Interrupted,
    FailedToStart,
};

