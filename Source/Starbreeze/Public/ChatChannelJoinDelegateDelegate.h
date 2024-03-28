#pragma once
#include "CoreMinimal.h"
#include "ChatChannelJoinDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChatChannelJoinDelegate, const FString&, ChannelSlug);

