#pragma once
#include "CoreMinimal.h"
#include "ESBZTrafficNodeExec.generated.h"

UENUM(BlueprintType)
enum class ESBZTrafficNodeExec : uint8 {
    Completed,
    Failed,
    Waiting,
};

