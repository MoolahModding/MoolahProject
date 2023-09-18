#pragma once
#include "CoreMinimal.h"
#include "ESBZSparseIrradianceHintVolumeAction.generated.h"

UENUM(BlueprintType)
namespace ESBZSparseIrradianceHintVolumeAction {
    enum Type {
        ExcludeTriangles,
        VoxelizeEmptySpace,
        DiscardEmptySpaceProbes,
        DiscardAllProbes,
        RepulseProbes,
        DisableCompression,
        Max,
    };
}

