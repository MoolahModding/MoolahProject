#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnEnterGameStateDynamicDelegateDelegate.h"
#include "SBZWaitStateMachineStateChangeCallbackProxy.generated.h"

class UObject;
class USBZWaitStateMachineStateChangeCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USBZWaitStateMachineStateChangeCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterGameStateDynamicDelegate OnSuccess;
    
    USBZWaitStateMachineStateChangeCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZWaitStateMachineStateChangeCallbackProxy* WaitGameStateMachineStateChange(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStateEntered(FName StateName);
    
};

