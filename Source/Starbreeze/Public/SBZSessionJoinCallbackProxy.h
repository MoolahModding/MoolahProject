#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnOnlineSessionEventDelegateDelegate.h"
#include "SBZOnlineSearchResult.h"
#include "SBZSessionJoinCallbackProxy.generated.h"

class UObject;
class USBZSessionJoinCallbackProxy;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSessionJoinCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZOnlineSearchResult SessionToJoin;
    
public:
    USBZSessionJoinCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZSessionJoinCallbackProxy* SessionJoin(UObject* NewWorldContextObject, const FSBZOnlineSearchResult& InSessionToJoin);
    
};

