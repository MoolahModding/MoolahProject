#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsRequestFriendsNotif.h"
#include "DRequestFriendsNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDRequestFriendsNotif, FAccelByteModelsRequestFriendsNotif, Notif);

