#pragma once
#include "CoreMinimal.h"
#include "SBZVehicleSplineFollowingComponentReplicatedProperties.generated.h"

class ASBZSpline;

USTRUCT(BlueprintType)
struct FSBZVehicleSplineFollowingComponentReplicatedProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZSpline*> Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraveledDistance;
    
    STARBREEZE_API FSBZVehicleSplineFollowingComponentReplicatedProperties();
};

