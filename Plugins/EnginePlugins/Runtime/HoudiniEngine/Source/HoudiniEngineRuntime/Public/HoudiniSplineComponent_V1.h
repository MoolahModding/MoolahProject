#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HoudiniSplineComponent_V1.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHoudiniSplineComponent_V1 : public USceneComponent {
    GENERATED_BODY()
public:
    UHoudiniSplineComponent_V1();

};

