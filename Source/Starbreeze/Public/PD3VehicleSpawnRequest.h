#pragma once
#include "CoreMinimal.h"
#include "PD3VehicleSpawnRequest.generated.h"

class ASBZSpline;
class USBZAssaultVehicleSpawnerData;

USTRUCT(BlueprintType)
struct FPD3VehicleSpawnRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAssaultVehicleSpawnerData* SpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZSpline* EnterSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZSpline* ExitSpline;
    
    STARBREEZE_API FPD3VehicleSpawnRequest();
};

