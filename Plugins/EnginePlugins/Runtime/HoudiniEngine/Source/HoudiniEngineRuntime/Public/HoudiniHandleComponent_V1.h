#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HoudiniHandleComponent_V1.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHoudiniHandleComponent_V1 : public USceneComponent {
    GENERATED_BODY()
public:
    UHoudiniHandleComponent_V1(const FObjectInitializer& ObjectInitializer);

};

