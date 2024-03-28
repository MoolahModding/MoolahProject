#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyNotif.h"
#include "DPartyUpdateNotifDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyUpdateNotif, FAccelByteModelsPartyNotif, Notif);

