#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDsNotice.h"
#include "DDsNotifDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDDsNotif, FAccelByteModelsDsNotice, Notif);

