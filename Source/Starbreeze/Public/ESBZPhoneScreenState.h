#pragma once
#include "CoreMinimal.h"
#include "ESBZPhoneScreenState.generated.h"

UENUM(BlueprintType)
enum class ESBZPhoneScreenState : uint8 {
    Activate,
    Waiting,
    Complete,
    Fail,
};

