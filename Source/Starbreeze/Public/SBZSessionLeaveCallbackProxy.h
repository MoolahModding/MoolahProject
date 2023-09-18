#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnOnlineSessionEventDelegateDelegate.h"
#include "SBZSessionLeaveCallbackProxy.generated.h"

class UObject;
class USBZSessionLeaveCallbackProxy;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSessionLeaveCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnComplete;
    
    USBZSessionLeaveCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZSessionLeaveCallbackProxy* SessionLeave(UObject* WorldContextObject);
    
};

