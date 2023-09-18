#pragma once
#include "CoreMinimal.h"
#include "ESBZVehicleDoorType.h"
#include "SBZVehicleDoorAnimationContainer.generated.h"

class USBZBuiltInAnimMontage;

USTRUCT(BlueprintType)
struct FSBZVehicleDoorAnimationContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZVehicleDoorType, USBZBuiltInAnimMontage*> DoorAnimations;
    
    STARBREEZE_API FSBZVehicleDoorAnimationContainer();
};

