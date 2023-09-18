#pragma once
#include "CoreMinimal.h"
#include "SBZVehicleSplineData.h"
#include "SBZVehicleSpawnData.generated.h"

class USBZAssaultVehicleSpawnerData;

USTRUCT(BlueprintType)
struct FSBZVehicleSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZVehicleSplineData> Paths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAssaultVehicleSpawnerData* VehicleSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    STARBREEZE_API FSBZVehicleSpawnData();
};

