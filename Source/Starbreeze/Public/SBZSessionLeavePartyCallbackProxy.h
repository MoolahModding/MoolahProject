#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnOnlineSessionEventDelegateDelegate.h"
#include "SBZSessionLeavePartyCallbackProxy.generated.h"

class UObject;
class USBZSessionLeavePartyCallbackProxy;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSessionLeavePartyCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnComplete;
    
    USBZSessionLeavePartyCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZSessionLeavePartyCallbackProxy* SessionLeaveParty(UObject* WorldContextObject);
    
};

