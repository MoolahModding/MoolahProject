#pragma once
#include "CoreMinimal.h"
#include "EClientJoinType.generated.h"

UENUM(BlueprintType)
enum class EClientJoinType : uint8 {
    Normal,
    DirectJoin,
};

