#pragma once
#include "CoreMinimal.h"
#include "ESBZTickingLootType.generated.h"

UENUM(BlueprintType)
enum class ESBZTickingLootType : uint8 {
    NotTicking,
    Sabotaged,
    Increasing,
    Decreasing,
};

