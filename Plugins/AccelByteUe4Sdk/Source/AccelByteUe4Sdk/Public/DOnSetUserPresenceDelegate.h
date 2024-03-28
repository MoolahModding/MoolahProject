#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSetOnlineUsersResponse.h"
#include "DOnSetUserPresenceDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FDOnSetUserPresence, FAccelByteModelsSetOnlineUsersResponse, Response);

