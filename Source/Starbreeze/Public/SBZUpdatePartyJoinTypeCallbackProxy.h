#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ESBZOnlineJoinType.h"
#include "OnOnlineSessionEventDelegateDelegate.h"
#include "SBZUpdatePartyJoinTypeCallbackProxy.generated.h"

class UObject;
class USBZUpdatePartyJoinTypeCallbackProxy;

UCLASS(Blueprintable)
class STARBREEZE_API USBZUpdatePartyJoinTypeCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnlineSessionEventDelegate OnSuccess;
    
    USBZUpdatePartyJoinTypeCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZUpdatePartyJoinTypeCallbackProxy* UpdatePartyJoinType(UObject* WorldContextObject, ESBZOnlineJoinType InNewJoinType);
    
};

