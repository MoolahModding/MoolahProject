#pragma once
#include "CoreMinimal.h"
#include "ESBZUserCreationCode.generated.h"

UENUM(BlueprintType)
enum class ESBZUserCreationCode : uint8 {
    Success,
    Duplicate,
    Failed,
};

