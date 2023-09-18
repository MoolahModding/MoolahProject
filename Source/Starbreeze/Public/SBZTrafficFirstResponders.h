#pragma once
#include "CoreMinimal.h"
#include "SBZVehicleArrayElement.h"
#include "SBZTrafficFirstResponders.generated.h"

class UClass;

USTRUCT(BlueprintType)
struct FSBZTrafficFirstResponders {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> VehicleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZVehicleArrayElement> WeightedVehicleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountVehiclesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountVehiclesToWaitOn;
    
    STARBREEZE_API FSBZTrafficFirstResponders();
};

