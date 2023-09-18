#pragma once
#include "CoreMinimal.h"
#include "EPD3DefeatState.generated.h"

UENUM(BlueprintType)
enum class EPD3DefeatState : uint8 {
    None,
    TasedGently,
    Tased,
    Cuffed,
    Downed,
    BleedOut,
    InCustody,
    Subdued,
    CuffedSubdued,
};

