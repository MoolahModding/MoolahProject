#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDsNotice.h"
#include "DDsNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDDsNotif, FAccelByteModelsDsNotice, Notif);

