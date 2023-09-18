#pragma once
#include "CoreMinimal.h"
#include "ESBZSecurityCompany.generated.h"

UENUM(BlueprintType)
enum class ESBZSecurityCompany : uint8 {
    None,
    GenSec,
    Senturian,
    AmGuard,
};

