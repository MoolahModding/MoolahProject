#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateWaitingReplay.generated.h"

class USBZStateMachineData;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitingReplay : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineData* Data;
    
public:
    USBZStateMachineStateWaitingReplay();

};

