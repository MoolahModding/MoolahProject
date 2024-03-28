#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDisconnectNotif.h"
#include "DDisconnectNotifDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDDisconnectNotifDelegate, FAccelByteModelsDisconnectNotif, Notif);

