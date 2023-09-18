#pragma once
#include "CoreMinimal.h"
#include "ESBZTrafficVehicleType.generated.h"

UENUM(BlueprintType)
enum class ESBZTrafficVehicleType : uint8 {
    FirstResponder,
    SwatVan,
    EscapeVan,
    Civilian,
    Aerial,
    FBIVan,
};

