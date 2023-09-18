#pragma once
#include "CoreMinimal.h"
#include "ESBZAIWeakPointType.generated.h"

UENUM(BlueprintType)
enum class ESBZAIWeakPointType : uint8 {
    None,
    DozerFaceplate,
    ShieldVisor,
    GrenadeBelt,
    TaserBattery,
};

