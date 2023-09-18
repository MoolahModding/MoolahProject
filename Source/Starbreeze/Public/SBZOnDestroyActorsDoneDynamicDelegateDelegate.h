#pragma once
#include "CoreMinimal.h"
#include "SBZOnDestroyActorsDoneDynamicDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnDestroyActorsDoneDynamicDelegate, const TArray<AActor*>&, KeptActors, const TArray<AActor*>&, DestroyedActors);

