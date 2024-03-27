#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsMatchmakingNotice.h"
#include "DMatchmakingNotifDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDMatchmakingNotif, FAccelByteModelsMatchmakingNotice, Notif);

