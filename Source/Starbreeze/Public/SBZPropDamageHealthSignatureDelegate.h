#pragma once
#include "CoreMinimal.h"
#include "SBZPropDamageContext.h"
#include "SBZPropDamageHealthSignatureDelegate.generated.h"

class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSBZPropDamageHealthSignature, UActorComponent*, PoolComponent, float, Health, bool, bDoCosmetics, const FSBZPropDamageContext&, DamageContext);

