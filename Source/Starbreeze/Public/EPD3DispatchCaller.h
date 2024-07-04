#pragma once
#include "CoreMinimal.h"
#include "EPD3DispatchCaller.generated.h"

UENUM(BlueprintType)
enum class EPD3DispatchCaller : uint8 {
    Cop,
    Civilian,
    Camera,
    Dispatch,
    MAX,
    Default = Cop,
};

