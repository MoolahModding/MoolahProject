#pragma once
#include "CoreMinimal.h"
#include "SBZTrafficObstacleInfo.generated.h"

class AActor;
class ASBZTrafficVolume;
class ASBZWheeledVehicle;

USTRUCT(BlueprintType)
struct FSBZTrafficObstacleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ObstacleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZWheeledVehicle* ObstacleVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZTrafficVolume* ObstacleTrafficVolume;
    
    STARBREEZE_API FSBZTrafficObstacleInfo();
};

