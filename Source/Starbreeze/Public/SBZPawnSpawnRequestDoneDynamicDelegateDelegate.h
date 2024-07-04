#pragma once
#include "CoreMinimal.h"
#include "ESBZSpawnRequestStatus.h"
#include "SBZPawnSpawnRequestHandle.h"
#include "SBZPawnSpawnRequestDoneDynamicDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSBZPawnSpawnRequestDoneDynamicDelegate, FSBZPawnSpawnRequestHandle, RequestHandle, const TArray<APawn*>&, CreatedPawnArray, ESBZSpawnRequestStatus, FinalStatus);

