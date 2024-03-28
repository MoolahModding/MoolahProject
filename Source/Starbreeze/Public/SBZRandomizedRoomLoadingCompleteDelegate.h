#pragma once
#include "CoreMinimal.h"
#include "SBZRandomizedRoomLoadingCompleteDelegate.generated.h"

class ASBZLevelScriptActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZRandomizedRoomLoadingComplete, ASBZLevelScriptActor*, LevelScriptActor);

