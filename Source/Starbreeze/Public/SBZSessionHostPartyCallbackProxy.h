#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnOnlineSessionEventDelegateDelegate.h"
#include "SBZOnlinePartyParamsUi.h"
#include "SBZSessionHostPartyCallbackProxy.generated.h"

class UObject;
class USBZSessionHostPartyCallbackProxy;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSessionHostPartyCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnlinePartyParamsUi PartyParams;
    
public:
    USBZSessionHostPartyCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZSessionHostPartyCallbackProxy* SessionHostParty(UObject* NewWorldContextObject, const FSBZOnlinePartyParamsUi& InPartyParams);
    
};

