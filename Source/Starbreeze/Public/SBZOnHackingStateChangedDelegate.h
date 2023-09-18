#pragma once
#include "CoreMinimal.h"
#include "ESBZHackingState.h"
#include "SBZOnHackingStateChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZOnHackingStateChanged, AActor*, InActor, ESBZHackingState, NewState, bool, bDoCosmetics);

