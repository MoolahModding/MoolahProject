#pragma once
#include "CoreMinimal.h"
#include "ESBZObjectiveType.generated.h"

UENUM(BlueprintType)
enum class ESBZObjectiveType : uint8 {
    OneShot,
    Progress,
    Timed,
    Money,
};

