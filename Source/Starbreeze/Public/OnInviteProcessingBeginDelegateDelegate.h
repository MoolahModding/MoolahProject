#pragma once
#include "CoreMinimal.h"
#include "SBZOnlineSearchResult.h"
#include "OnInviteProcessingBeginDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInviteProcessingBeginDelegate, const FSBZOnlineSearchResult&, RemoteSessionInfo);

