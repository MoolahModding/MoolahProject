#pragma once
#include "CoreMinimal.h"
#include "EAccelByteStatisticSetBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteStatisticSetBy : uint8 {
    CLIENT,
    SERVER,
};

