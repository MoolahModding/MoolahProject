#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZVehicleInterface.generated.h"

class USBZVehicleSpawnComponent;
class USBZVehicleSplineFollowingComponent;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class STARBREEZE_API USBZVehicleInterface : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZVehicleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual USBZVehicleSplineFollowingComponent* GetSplineFollowingComponent() const PURE_VIRTUAL(GetSplineFollowingComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual USBZVehicleSpawnComponent* GetSpawnComponent() const PURE_VIRTUAL(GetSpawnComponent, return NULL;);
    
};

