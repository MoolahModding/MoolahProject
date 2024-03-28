#pragma once
#include "CoreMinimal.h"
#include "ESBZNotOwningHeistPolicyType.generated.h"

UENUM(BlueprintType)
enum class ESBZNotOwningHeistPolicyType : uint8 {
    NoAction,
    Ban,
    ReturnToMainMenu,
};

