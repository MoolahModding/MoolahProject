#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyMemberConnectionNotice.h"
#include "DPartyMemberDisconnectNotifDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyMemberDisconnectNotif, FAccelByteModelsPartyMemberConnectionNotice, Notif);

