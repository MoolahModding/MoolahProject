#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZLightVisibilityShape.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZLightVisibilityShape : public AActor {
    GENERATED_BODY()
public:
    ASBZLightVisibilityShape(const FObjectInitializer& ObjectInitializer);

};

