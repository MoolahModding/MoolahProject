#pragma once
#include "CoreMinimal.h"
#include "ESBZModuleActorState.h"
#include "SBZModuleActorStateChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZModuleActorStateChangedDelegate, ESBZModuleActorState, NewState);

