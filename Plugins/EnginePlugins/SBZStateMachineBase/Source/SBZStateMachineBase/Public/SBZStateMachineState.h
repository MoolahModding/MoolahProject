#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZStateMachineState.generated.h"

class USBZStateMachineData;

UCLASS(Blueprintable)
class SBZSTATEMACHINEBASE_API USBZStateMachineState : public UObject {
    GENERATED_BODY()
public:
    USBZStateMachineState();

    FName StateName;
    virtual void OnEnter(USBZStateMachineData* InData) PURE_VIRTUAL(OnEnter);
};

