#pragma once
#include "CoreMinimal.h"
#include "ESBZTrafficSplineType.generated.h"

UENUM(BlueprintType)
enum class ESBZTrafficSplineType : uint8 {
    VehicleSpawner,
    ParkingSpot,
    EndPoint,
};

