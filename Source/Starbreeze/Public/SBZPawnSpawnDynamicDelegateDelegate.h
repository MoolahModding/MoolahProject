#pragma once
#include "CoreMinimal.h"
#include "SBZPawnSpawnRequestHandle.h"
#include "SBZPawnSpawnDynamicDelegateDelegate.generated.h"

class APawn;
class ASBZPawnSpawnBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSBZPawnSpawnDynamicDelegate, FSBZPawnSpawnRequestHandle, RequestHandle, APawn*, Pawn, ASBZPawnSpawnBase*, Spawner);

