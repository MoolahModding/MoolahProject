#pragma once
#include "CoreMinimal.h"
#include "SBZGroupSpawnedPawnDelegateBPDelegate.generated.h"

class APD3PawnSpawnGroup;
class APawn;
class ASBZPawnSpawnBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZGroupSpawnedPawnDelegateBP, APD3PawnSpawnGroup*, SpawnGroup, ASBZPawnSpawnBase*, Spawner, APawn*, Pawn);

