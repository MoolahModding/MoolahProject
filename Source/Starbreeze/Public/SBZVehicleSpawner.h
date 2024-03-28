#pragma once
#include "CoreMinimal.h"
#include "SBZSpline.h"
#include "SBZVehicleSpawner.generated.h"

class USBZTrafficManager;

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class ADEPRECATED_SBZVehicleSpawner : public ASBZSpline {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZTrafficManager* TrafficManager;
    
public:
    ADEPRECATED_SBZVehicleSpawner();
};

