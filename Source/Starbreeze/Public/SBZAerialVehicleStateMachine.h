#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAerialVehicleStateMachine.generated.h"

class ISBZAerialVehicleState;
class USBZAerialVehicleState;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAerialVehicleStateMachine : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISBZAerialVehicleState> CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, TScriptInterface<ISBZAerialVehicleState>> States;
    
public:
    USBZAerialVehicleStateMachine();

};

