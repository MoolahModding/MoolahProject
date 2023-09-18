#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputStaticMesh.h"
#include "HoudiniInputFoliageType_InstancedStaticMesh.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh {
    GENERATED_BODY()
public:
    UHoudiniInputFoliageType_InstancedStaticMesh();

};

