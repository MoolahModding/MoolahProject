#pragma once
#include "CoreMinimal.h"
#include "ESBZUserPrivilegesProxy.generated.h"

UENUM(BlueprintType)
enum class ESBZUserPrivilegesProxy : uint8 {
    CanPlay,
    CanPlayOnline,
    CanCommunicateOnline,
    CanUseUserGeneratedContent,
    CanUserCrossPlay,
};

