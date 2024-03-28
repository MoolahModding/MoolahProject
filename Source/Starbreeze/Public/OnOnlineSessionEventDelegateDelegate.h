#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "OnOnlineSessionEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOnlineSessionEventDelegate, ESBZOnlineCode, ErrorCode);

