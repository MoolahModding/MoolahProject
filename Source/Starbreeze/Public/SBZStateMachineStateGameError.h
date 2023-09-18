#pragma once
#include "CoreMinimal.h"
#include "ESBZGameDataState.h"
#include "ESBZServiceStatus.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateGameError.generated.h"

class USBZGameErrorWidget;
class USBZStateMachineDataGameError;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateGameError : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataGameError* ErrorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZGameErrorWidget* GameErrorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZGameDataState GameDataState;
    
public:
    USBZStateMachineStateGameError();

protected:
    UFUNCTION(BlueprintCallable)
    void SetNetworkConnected(ESBZServiceStatus ServiceStatus);
    
};

