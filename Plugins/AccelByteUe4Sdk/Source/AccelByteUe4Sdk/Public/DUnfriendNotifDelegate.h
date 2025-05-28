#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUnfriendNotif.h"
#include "DUnfriendNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDUnfriendNotif, FAccelByteModelsUnfriendNotif, Notif);

