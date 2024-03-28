#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyJoinNotice.h"
#include "DPartyJoinNotifDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyJoinNotif, FAccelByteModelsPartyJoinNotice, Notif);

