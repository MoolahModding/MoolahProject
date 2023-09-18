#pragma once
#include "CoreMinimal.h"
#include "SBZVehicleArrayElement.h"
#include "SBZTrafficFBIVan.generated.h"

USTRUCT(BlueprintType)
struct FSBZTrafficFBIVan {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZVehicleArrayElement> WeightedVehicleArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChance[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveSpawnChance[3];
    
    STARBREEZE_API FSBZTrafficFBIVan();
};

