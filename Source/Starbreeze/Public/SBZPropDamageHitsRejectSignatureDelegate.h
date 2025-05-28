#pragma once
#include "CoreMinimal.h"
#include "SBZPropDamageHitsRejectSignatureDelegate.generated.h"

class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZPropDamageHitsRejectSignature, UActorComponent*, PoolComponent, int32, Hits, int32, ChangedHits);

