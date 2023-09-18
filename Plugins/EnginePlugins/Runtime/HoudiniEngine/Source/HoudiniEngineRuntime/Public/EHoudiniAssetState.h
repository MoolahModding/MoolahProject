#pragma once
#include "CoreMinimal.h"
#include "EHoudiniAssetState.generated.h"

UENUM(BlueprintType)
enum class EHoudiniAssetState : uint8 {
    NeedInstantiation,
    NewHDA,
    PreInstantiation,
    Instantiating,
    PreCook,
    Cooking,
    PostCook,
    PreProcess,
    Processing,
    None,
    NeedRebuild,
    NeedDelete,
    Deleting,
    ProcessTemplate,
};

