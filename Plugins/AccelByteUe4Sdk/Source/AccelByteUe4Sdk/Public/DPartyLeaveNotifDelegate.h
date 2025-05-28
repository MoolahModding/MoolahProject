#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsLeavePartyNotice.h"
#include "DPartyLeaveNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyLeaveNotif, FAccelByteModelsLeavePartyNotice, Notif);

