#pragma once
#include "CoreMinimal.h"
#include "ESBZUserPrivilegesProxy.h"
#include "SBZOnPrivilegeQueriedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnPrivilegeQueried, ESBZUserPrivilegesProxy, Privilege, bool, bPrivilegeAllowed);

