#pragma once
#include "CoreMinimal.h"
#include "ESBZWindowMode.generated.h"

UENUM()
enum class ESBZWindowMode {
    FullScreen,
    Borderless,
    Windowed,
    Invalid = -1,
};

