#pragma once
#include "CoreMinimal.h"
#include "SBZVehicleReplicatedMovementBase.h"
#include "SBZWheeledVehicleReplicatedMovement.generated.h"

USTRUCT(BlueprintType)
struct FSBZWheeledVehicleReplicatedMovement : public FSBZVehicleReplicatedMovementBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Steering;
    
    STARBREEZE_API FSBZWheeledVehicleReplicatedMovement();
};

