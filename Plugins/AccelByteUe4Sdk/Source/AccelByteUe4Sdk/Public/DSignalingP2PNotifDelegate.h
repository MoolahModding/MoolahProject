#pragma once
#include "CoreMinimal.h"
#include "DSignalingP2PNotifDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDSignalingP2PNotif, const FString&, UserID, const FString&, Message);

