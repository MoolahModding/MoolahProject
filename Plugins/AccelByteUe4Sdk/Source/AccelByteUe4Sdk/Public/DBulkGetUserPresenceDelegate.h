#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkUserStatusNotif.h"
#include "DBulkGetUserPresenceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDBulkGetUserPresence, FAccelByteModelsBulkUserStatusNotif, Response);

