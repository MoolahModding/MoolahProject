#pragma once
#include "CoreMinimal.h"
#include "ESBZBlockPlayerPawnContext.generated.h"

UENUM(BlueprintType)
enum class ESBZBlockPlayerPawnContext : uint8 {
    Init,
    Carried,
    Death,
    WrongDeathPrediction,
};

