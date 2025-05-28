#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyMemberConnectionNotice.h"
#include "DPartyMemberConnectNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyMemberConnectNotif, FAccelByteModelsPartyMemberConnectionNotice, Notif);

