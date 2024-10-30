#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HoudiniInstancedActorComponent_V1.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHoudiniInstancedActorComponent_V1 : public USceneComponent {
    GENERATED_BODY()
public:
    UHoudiniInstancedActorComponent_V1(const FObjectInitializer& ObjectInitializer);

};

