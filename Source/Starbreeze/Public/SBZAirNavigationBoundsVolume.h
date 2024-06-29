#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SBZAirNavigationBoundsVolume.generated.h"

UCLASS(Blueprintable)
class ASBZAirNavigationBoundsVolume : public AVolume {
    GENERATED_BODY()
public:
    ASBZAirNavigationBoundsVolume(const FObjectInitializer& ObjectInitializer);

};

