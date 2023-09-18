#pragma once
#include "CoreMinimal.h"
#include "EHoudiniExecutableType.generated.h"

UENUM(BlueprintType)
enum EHoudiniExecutableType {
    HRSHE_Houdini,
    HRSHE_HoudiniFX,
    HRSHE_HoudiniCore,
    HRSHE_HoudiniIndie,
};

