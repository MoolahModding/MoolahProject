#pragma once
#include "CoreMinimal.h"
#include "SBZClientStateMachineState.h"
#include "SBZStateMachineStateWaitingReturnToIIS.generated.h"

class USBZStateMachineDataIIS;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitingReturnToIIS : public USBZClientStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataIIS* ReturnReason;
    
public:
    USBZStateMachineStateWaitingReturnToIIS();

private:
    UFUNCTION(BlueprintCallable)
    void HandlePostLoadMap(UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable)
    void HandleP2PSessionDestroyed(FName SessionName, bool bResult);
    
};

