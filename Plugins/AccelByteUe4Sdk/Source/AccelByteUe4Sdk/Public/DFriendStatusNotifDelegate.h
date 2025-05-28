#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUsersPresenceNotice.h"
#include "DFriendStatusNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDFriendStatusNotif, FAccelByteModelsUsersPresenceNotice, Notif);

