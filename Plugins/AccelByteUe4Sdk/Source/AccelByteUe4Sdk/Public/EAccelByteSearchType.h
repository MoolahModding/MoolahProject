#pragma once
#include "CoreMinimal.h"
#include "EAccelByteSearchType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteSearchType : uint8 {
    ALL,
    DISPLAYNAME,
    USERNAME,
};

