#pragma once
#include "CoreMinimal.h"
#include "SBZHUDNotificationData.h"
#include "SBZOnDisplayHUDNotificationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnDisplayHUDNotification, const FSBZHUDNotificationData&, NotificationData);

