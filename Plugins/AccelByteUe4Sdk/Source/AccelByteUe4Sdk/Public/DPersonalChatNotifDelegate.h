#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPersonalMessageNotice.h"
#include "DPersonalChatNotifDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDPersonalChatNotif, FAccelByteModelsPersonalMessageNotice, Notif);

