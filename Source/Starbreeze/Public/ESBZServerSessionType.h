#pragma once
#include "CoreMinimal.h"
#include "ESBZServerSessionType.generated.h"

UENUM(BlueprintType)
enum class ESBZServerSessionType : uint8 {
    ListenServer,
    DedicatedServer,
};

