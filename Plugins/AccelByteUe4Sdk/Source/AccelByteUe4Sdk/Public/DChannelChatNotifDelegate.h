#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChannelMessageNotice.h"
#include "DChannelChatNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDChannelChatNotif, FAccelByteModelsChannelMessageNotice, Notif);

