#pragma once
#include "CoreMinimal.h"
#include "EHoudiniRuntimeSettingsRecomputeFlag.generated.h"

UENUM(BlueprintType)
enum EHoudiniRuntimeSettingsRecomputeFlag {
    HRSRF_Always,
    HRSRF_OnlyIfMissing,
    HRSRF_Never,
};

