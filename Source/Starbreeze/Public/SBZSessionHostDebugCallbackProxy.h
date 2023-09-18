#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnOnlineSessionEventDelegateDelegate.h"
#include "SBZSessionHostDebugCallbackProxy.generated.h"

class UObject;
class USBZSessionHostDebugCallbackProxy;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSessionHostDebugCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnComplete;
    
    USBZSessionHostDebugCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZSessionHostDebugCallbackProxy* SessionHostDebug(UObject* WorldContextObject);
    
};

