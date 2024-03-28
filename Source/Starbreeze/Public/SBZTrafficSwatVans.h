#pragma once
#include "CoreMinimal.h"
#include "SBZVehicleArrayElement.h"
#include "Templates/SubclassOf.h"
#include "SBZTrafficSwatVans.generated.h"

class ASBZWheeledVehicle;

USTRUCT(BlueprintType)
struct FSBZTrafficSwatVans {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASBZWheeledVehicle>> VehicleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZVehicleArrayElement> WeightedVehicleArray;
    
    STARBREEZE_API FSBZTrafficSwatVans();
};

