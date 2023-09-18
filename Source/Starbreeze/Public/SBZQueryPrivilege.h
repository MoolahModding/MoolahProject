#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ESBZUserPrivilegesProxy.h"
#include "SBZOnPrivilegeAllowedDelegate.h"
#include "SBZOnPrivilegeBlockedDelegate.h"
#include "SBZQueryPrivilege.generated.h"

class UObject;
class USBZQueryPrivilege;

UCLASS(Blueprintable)
class STARBREEZE_API USBZQueryPrivilege : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnPrivilegeAllowed OnPrivilegeAllowed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnPrivilegeBlocked OnPrivilegeBlocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USBZQueryPrivilege();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZQueryPrivilege* QueryPrivilege(UObject* NewWorldContextObject, ESBZUserPrivilegesProxy Privilege);
    
};

