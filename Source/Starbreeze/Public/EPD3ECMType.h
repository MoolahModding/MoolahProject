#pragma once
#include "CoreMinimal.h"
#include "EPD3ECMType.generated.h"

UENUM(BlueprintType)
enum class EPD3ECMType : uint8 {
    Radio,
    Pager,
    Camera,
};

