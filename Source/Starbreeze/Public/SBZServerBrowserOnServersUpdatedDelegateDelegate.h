#pragma once
#include "CoreMinimal.h"
#include "ESBZServerBrowserSessionsType.h"
#include "SBZServerBrowserOnServersUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZServerBrowserOnServersUpdatedDelegate, TEnumAsByte<ESBZServerBrowserSessionsType>, SessionsType);

