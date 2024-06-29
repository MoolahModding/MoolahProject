#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ESBZGameStateMachineState.h"
#include "OnEnterGameStateDynamicDelegateDelegate.h"
#include "SBZWaitStateMachineStateCallbackProxy.generated.h"

class UObject;
class USBZWaitStateMachineStateCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USBZWaitStateMachineStateCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterGameStateDynamicDelegate OnSuccess;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USBZWaitStateMachineStateCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZWaitStateMachineStateCallbackProxy* WaitGameStateMachineState(UObject* NewWorldContextObject, const TEnumAsByte<ESBZGameStateMachineState>& StateToWait);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStateEntered(FName StateName);
    
};

