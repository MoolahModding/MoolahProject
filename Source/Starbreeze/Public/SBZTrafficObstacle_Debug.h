#pragma once
#include "CoreMinimal.h"
#include "SBZTrafficObstacle_Debug.generated.h"

class AActor;
class ASBZWheeledVehicle;

USTRUCT(BlueprintType)
struct FSBZTrafficObstacle_Debug {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZWheeledVehicle* Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ObstacleActor;
    
    STARBREEZE_API FSBZTrafficObstacle_Debug();
};

