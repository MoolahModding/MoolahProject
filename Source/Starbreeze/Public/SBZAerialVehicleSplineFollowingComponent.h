#pragma once
#include "CoreMinimal.h"
#include "SBZVehicleSplineFollowingComponent.h"
#include "SBZAerialVehicleSplineFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAerialVehicleSplineFollowingComponent : public USBZVehicleSplineFollowingComponent {
    GENERATED_BODY()
public:
    USBZAerialVehicleSplineFollowingComponent();

};

