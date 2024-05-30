#pragma once
#include "CoreMinimal.h"
#include "SBZSpawnRequestCompletedDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZSpawnRequestCompletedDelegate, APawn*, SpawnedPawn);

