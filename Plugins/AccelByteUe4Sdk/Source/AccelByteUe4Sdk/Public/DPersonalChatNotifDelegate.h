#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPersonalMessageNotice.h"
#include "DPersonalChatNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDPersonalChatNotif, FAccelByteModelsPersonalMessageNotice, Notif);

