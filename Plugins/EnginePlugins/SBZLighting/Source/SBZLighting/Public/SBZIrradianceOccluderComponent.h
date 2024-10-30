#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBZIrradianceOccluderComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZIrradianceOccluderComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USBZIrradianceOccluderComponent(const FObjectInitializer& ObjectInitializer);

};

