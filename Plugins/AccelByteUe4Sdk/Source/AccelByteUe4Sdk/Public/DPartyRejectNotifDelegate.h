#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyRejectNotice.h"
#include "DPartyRejectNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyRejectNotif, FAccelByteModelsPartyRejectNotice, Notif);

