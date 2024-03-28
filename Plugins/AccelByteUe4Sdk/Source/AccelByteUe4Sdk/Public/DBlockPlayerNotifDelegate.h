#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBlockPlayerNotif.h"
#include "DBlockPlayerNotifDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDBlockPlayerNotif, FAccelByteModelsBlockPlayerNotif, Notif);

