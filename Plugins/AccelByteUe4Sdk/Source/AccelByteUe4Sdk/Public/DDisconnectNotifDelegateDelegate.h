#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDisconnectNotif.h"
#include "DDisconnectNotifDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDDisconnectNotifDelegate, FAccelByteModelsDisconnectNotif, Notif);

