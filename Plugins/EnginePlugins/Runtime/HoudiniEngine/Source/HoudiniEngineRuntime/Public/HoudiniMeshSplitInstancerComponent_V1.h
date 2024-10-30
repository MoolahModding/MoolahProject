#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HoudiniMeshSplitInstancerComponent_V1.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHoudiniMeshSplitInstancerComponent_V1 : public USceneComponent {
    GENERATED_BODY()
public:
    UHoudiniMeshSplitInstancerComponent_V1(const FObjectInitializer& ObjectInitializer);

};

