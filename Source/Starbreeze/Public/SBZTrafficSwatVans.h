#pragma once
#include "CoreMinimal.h"
#include "SBZVehicleArrayElement.h"
#include "SBZTrafficSwatVans.generated.h"

class UClass;

USTRUCT(BlueprintType)
struct FSBZTrafficSwatVans {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> VehicleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZVehicleArrayElement> WeightedVehicleArray;
    
    STARBREEZE_API FSBZTrafficSwatVans();
};

