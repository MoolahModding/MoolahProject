#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsRejectConsentNotice.h"
#include "DSetRejectConsentNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDSetRejectConsentNotif, FAccelByteModelsRejectConsentNotice, Notif);

