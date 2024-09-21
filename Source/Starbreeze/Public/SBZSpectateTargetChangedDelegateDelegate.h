#pragma once
#include "CoreMinimal.h"
#include "SBZSpectateTargetChangedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZSpectateTargetChangedDelegate, AActor*, TargetActor);

