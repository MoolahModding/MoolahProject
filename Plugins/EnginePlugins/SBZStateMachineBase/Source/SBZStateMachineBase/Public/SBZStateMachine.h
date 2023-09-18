#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZStateMachine.generated.h"

class USBZStateMachineState;

UCLASS(Blueprintable)
class SBZSTATEMACHINEBASE_API USBZStateMachine : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZStateMachineState* CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, USBZStateMachineState*> States;
    
public:
    USBZStateMachine();

};

