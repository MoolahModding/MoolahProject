#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBZVehicleArrayElement.h"
#include "Templates/SubclassOf.h"
#include "SBZTrafficCivilians.generated.h"

class ASBZWheeledVehicle;

USTRUCT(BlueprintType)
struct FSBZTrafficCivilians {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASBZWheeledVehicle>> VehicleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZVehicleArrayElement> WeightedVehicleArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval AmountVehicleToSpawnEachInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAmountVehiclesInLevel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval VehicleSpawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleDriveOffSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleDriveOffTurnSpeed;
    
    STARBREEZE_API FSBZTrafficCivilians();
};

