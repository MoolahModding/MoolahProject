#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateBackendError.generated.h"

class USBZBackendErrorWidget;
class USBZStateMachineDataGameError;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateBackendError : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataGameError* ErrorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBackendErrorWidget* BackendErrorWidget;
    
public:
    USBZStateMachineStateBackendError();
};

