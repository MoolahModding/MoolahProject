#pragma once
#include "CoreMinimal.h"
#include "UEnumServerType.generated.h"

UENUM(BlueprintType)
enum class UEnumServerType : uint8 {
    NONE,
    CLOUDSERVER,
    LOCALSERVER,
};

