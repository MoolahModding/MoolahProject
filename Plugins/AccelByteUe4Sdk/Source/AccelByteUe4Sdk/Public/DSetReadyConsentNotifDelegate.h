#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsReadyConsentNotice.h"
#include "DSetReadyConsentNotifDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDSetReadyConsentNotif, FAccelByteModelsReadyConsentNotice, Notif);

