#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZTrafficVehicleType.h"
#include "Templates/SubclassOf.h"
#include "SBZTrafficSpawnInfo.generated.h"

class ASBZWheeledVehicle;

USTRUCT(BlueprintType)
struct FSBZTrafficSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZWheeledVehicle> VehicleActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZTrafficVehicleType VehicleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    STARBREEZE_API FSBZTrafficSpawnInfo();
};

