#pragma once
#include "CoreMinimal.h"
#include "SBZWheeledVehicleOnEndObstacleDelegate.generated.h"

class AActor;
class ASBZWheeledVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZWheeledVehicleOnEndObstacle, ASBZWheeledVehicle*, Vehicle, AActor*, Actor);

