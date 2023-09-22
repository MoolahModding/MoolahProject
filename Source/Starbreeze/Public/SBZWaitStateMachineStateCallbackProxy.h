#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ESBZGameStateMachineState.h"
#include "OnEnterGameStateDynamicDelegateDelegate.h"
#include "SBZWaitStateMachineStateCallbackProxy.generated.h"

class UObject;

UCLASS(Blueprintable, MinimalAPI)
class USBZWaitStateMachineStateCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterGameStateDynamicDelegate OnSuccess;
    
    USBZWaitStateMachineStateCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZWaitStateMachineStateCallbackProxy* WaitGameStateMachineState(UObject* WorldContextObject, const TEnumAsByte<ESBZGameStateMachineState>& StateToWait);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStateEntered(FName StateName);
    
};

