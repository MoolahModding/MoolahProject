#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyMemberConnectionNotice.h"
#include "DPartyMemberDisconnectNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyMemberDisconnectNotif, FAccelByteModelsPartyMemberConnectionNotice, Notif);

