#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnOnlineGetNewsFeedEventDelegateDelegate.h"
#include "SBZOnlineGetNewsFeedCallbackProxy.generated.h"

class UObject;
class USBZOnlineGetNewsFeedCallbackProxy;

UCLASS(Blueprintable)
class STARBREEZE_API USBZOnlineGetNewsFeedCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineGetNewsFeedEventDelegate OnComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USBZOnlineGetNewsFeedCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZOnlineGetNewsFeedCallbackProxy* RequestNewsFeed(UObject* NewWorldContextObject);
    
};

