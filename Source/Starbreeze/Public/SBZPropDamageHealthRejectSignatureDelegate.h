#pragma once
#include "CoreMinimal.h"
#include "SBZPropDamageHealthRejectSignatureDelegate.generated.h"

class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZPropDamageHealthRejectSignature, UActorComponent*, PoolComponent, float, Health, float, Damage);

