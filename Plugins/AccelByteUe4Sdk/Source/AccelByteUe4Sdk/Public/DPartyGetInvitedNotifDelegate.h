#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPartyGetInvitedNotice.h"
#include "DPartyGetInvitedNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyGetInvitedNotif, FAccelByteModelsPartyGetInvitedNotice, Notif);

