#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZOnlineEventDelegateDelegate.h"
#include "SBZInvites.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZInvites : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnlineEventDelegate EventRequestUserInvite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnlineEventDelegate EventUserSwitchDuringInvite;
    
    USBZInvites();

private:
    UFUNCTION(BlueprintCallable)
    void HandleStateEnteredPlayTogether(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    void HandleStateEnteredInvite(FName StateName);
    
};

