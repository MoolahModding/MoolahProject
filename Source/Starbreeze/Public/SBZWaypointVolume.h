#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "SBZWaypointVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ASBZWaypointVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    ASBZWaypointVolume(const FObjectInitializer& ObjectInitializer);

};

