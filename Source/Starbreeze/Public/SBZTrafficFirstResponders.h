#pragma once
#include "CoreMinimal.h"
#include "SBZVehicleArrayElement.h"
#include "Templates/SubclassOf.h"
#include "SBZTrafficFirstResponders.generated.h"

class ASBZWheeledVehicle;

USTRUCT(BlueprintType)
struct FSBZTrafficFirstResponders {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASBZWheeledVehicle>> VehicleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZVehicleArrayElement> WeightedVehicleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountVehiclesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountVehiclesToWaitOn;
    
    STARBREEZE_API FSBZTrafficFirstResponders();
};

