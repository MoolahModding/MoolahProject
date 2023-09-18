#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsInvitationNotice.h"
#include "DPartyInviteNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyInviteNotif, FAccelByteModelsInvitationNotice, Notif);

