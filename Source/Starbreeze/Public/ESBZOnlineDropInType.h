#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineDropInType.generated.h"

UENUM(BlueprintType)
enum class ESBZOnlineDropInType : uint8 {
    Yes,
    No,
    Default = Yes,
};

