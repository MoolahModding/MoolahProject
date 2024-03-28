#pragma once
#include "CoreMinimal.h"
#include "ESBZSpawnRequestStatus.h"
#include "SBZActorSpawnRequestHandle.h"
#include "SBZActorSpawnRequestDoneDynamicDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSBZActorSpawnRequestDoneDynamicDelegate, FSBZActorSpawnRequestHandle, RequestHandle, const TArray<AActor*>&, CreatedActorArray, ESBZSpawnRequestStatus, FinalStatus);

