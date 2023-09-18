#pragma once
#include "CoreMinimal.h"
#include "ESBZServiceStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZServiceStatus : uint8 {
    OK,
    InternetFailure,
    NebulaFailure,
};

