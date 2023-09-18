#pragma once
#include "CoreMinimal.h"
#include "ESBZCameraSoundState.generated.h"

UENUM(BlueprintType)
enum class ESBZCameraSoundState : uint8 {
    None,
    Suspiscious,
    Alert,
};

