#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLeavePartyNotice.h"
#include "DPartyMemberLeaveNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyMemberLeaveNotif, FAccelByteModelsLeavePartyNotice, Notif);

