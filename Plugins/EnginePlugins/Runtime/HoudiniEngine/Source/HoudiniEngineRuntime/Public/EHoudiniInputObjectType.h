#pragma once
#include "CoreMinimal.h"
#include "EHoudiniInputObjectType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniInputObjectType : uint8 {
    Invalid,
    Object,
    StaticMesh,
    SkeletalMesh,
    SceneComponent,
    StaticMeshComponent,
    InstancedStaticMeshComponent,
    SplineComponent,
    HoudiniSplineComponent,
    HoudiniAssetComponent,
    Actor,
    Landscape,
    Brush,
    CameraComponent,
    DataTable,
    HoudiniAssetActor,
    FoliageType_InstancedStaticMesh,
};

