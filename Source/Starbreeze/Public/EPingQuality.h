#pragma once
#include "CoreMinimal.h"
#include "EPingQuality.generated.h"

UENUM(BlueprintType)
enum class EPingQuality : uint8 {
    EPQ_Default,
    EPQ_Fair,
    EPQ_High,
    EPQ_Critical,
    EPQ_MAX UMETA(Hidden),
};

