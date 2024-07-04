#pragma once
#include "CoreMinimal.h"
#include "ESBZHackableActorInterruptReason.h"
#include "SBZHackableActorInterruptedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZHackableActorInterruptedDelegate, ESBZHackableActorInterruptReason, Reason);

