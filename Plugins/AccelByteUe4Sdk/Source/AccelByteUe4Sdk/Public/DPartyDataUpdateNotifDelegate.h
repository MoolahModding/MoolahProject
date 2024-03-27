#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyDataNotif.h"
#include "DPartyDataUpdateNotifDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyDataUpdateNotif, FAccelByteModelsPartyDataNotif, Notif);

