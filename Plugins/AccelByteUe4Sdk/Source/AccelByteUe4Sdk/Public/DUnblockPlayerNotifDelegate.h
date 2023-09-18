#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUnblockPlayerNotif.h"
#include "DUnblockPlayerNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDUnblockPlayerNotif, FAccelByteModelsUnblockPlayerNotif, Notif);

