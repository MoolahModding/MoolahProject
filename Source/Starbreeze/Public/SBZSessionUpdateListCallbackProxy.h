#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnOnlineSessionSearchEventDelegateDelegate.h"
#include "SBZOnlineSessionParams.h"
#include "SBZSessionUpdateListCallbackProxy.generated.h"

class UObject;
class USBZSessionUpdateListCallbackProxy;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSessionUpdateListCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionSearchEventDelegate OnComplete;
    
    USBZSessionUpdateListCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZSessionUpdateListCallbackProxy* SessionUpdateList(UObject* WorldContextObject, const FSBZOnlineSessionParams& InSearchParams);
    
};

