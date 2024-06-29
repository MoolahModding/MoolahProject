#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayDialogResult.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayDialogResult : uint8 {
    Successful,
    Failed,
    Queued,
};

