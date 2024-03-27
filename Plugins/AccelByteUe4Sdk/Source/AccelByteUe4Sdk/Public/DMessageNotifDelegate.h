#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsNotificationMessage.h"
#include "DMessageNotifDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDMessageNotif, FAccelByteModelsNotificationMessage, Notif);

