#pragma once
#include "CoreMinimal.h"
#include "EAccelByteReportingCategory.generated.h"

UENUM(BlueprintType)
enum class EAccelByteReportingCategory : uint8 {
    UGC,
    USER,
    CHAT,
};

