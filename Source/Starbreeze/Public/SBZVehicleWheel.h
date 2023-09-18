#pragma once
#include "CoreMinimal.h"
#include "VehicleWheel.h"
#include "SBZVehicleWheel.generated.h"

UCLASS(Blueprintable)
class USBZVehicleWheel : public UVehicleWheel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDriven;
    
    USBZVehicleWheel();

};

