#pragma once
#include "CoreMinimal.h"
#include "PublicMessageReceivedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPublicMessageReceivedDelegate, const FString&, Timestamp, const FString&, Sender, const FString&, Message);

