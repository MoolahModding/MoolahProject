#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPD3DispatchCaller.h"
#include "EPD3DispatchCallerReason.h"
#include "PD3CallerReason.h"
#include "PD3Dispatcher.generated.h"

class UPD3Dispatcher;
class USBZActionNotificationAsset;

UCLASS(Blueprintable, DefaultToInstanced)
class UPD3Dispatcher : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3CallerReason Caller[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* CallData;
    
public:
    UPD3Dispatcher();

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_CallDispatcherByAsset(const USBZActionNotificationAsset* CallerReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPD3Dispatcher* GetDispatcher(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CallDispatcherByAsset(const USBZActionNotificationAsset* CallerReason, UObject* InDispatcherCallData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CallDispatcher(EPD3DispatchCaller InCaller, EPD3DispatchCallerReason InReason);
    
};

