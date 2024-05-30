#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAerialVehicleState.h"
#include "SBZDescendState.generated.h"

class USBZAerialVehicleStateMachine;

UCLASS(Blueprintable)
class STARBREEZE_API USBZDescendState : public UObject, public ISBZAerialVehicleState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAerialVehicleStateMachine* StateMachine;
    
public:
    USBZDescendState();


    // Fix for true pure virtual functions not being implemented
};

