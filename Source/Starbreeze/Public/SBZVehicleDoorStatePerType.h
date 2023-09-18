#pragma once
#include "CoreMinimal.h"
#include "ESBZVehicleDoorState.h"
#include "ESBZVehicleDoorType.h"
#include "SBZVehicleDoorStatePerType.generated.h"

USTRUCT(BlueprintType)
struct FSBZVehicleDoorStatePerType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVehicleDoorType DoorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVehicleDoorState DoorState;
    
    STARBREEZE_API FSBZVehicleDoorStatePerType();
};

