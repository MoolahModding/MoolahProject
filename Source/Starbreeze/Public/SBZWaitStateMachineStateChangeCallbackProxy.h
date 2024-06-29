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
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USBZWaitStateMachineStateChangeCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZWaitStateMachineStateChangeCallbackProxy* WaitGameStateMachineStateChange(UObject* NewWorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStateEntered(FName StateName);
    
};

