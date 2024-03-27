#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGotKickedFromPartyNotice.h"
#include "DPartyKickNotifDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDPartyKickNotif, FAccelByteModelsGotKickedFromPartyNotice, Notif);

