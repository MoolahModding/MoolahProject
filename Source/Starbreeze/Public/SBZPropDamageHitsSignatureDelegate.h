#pragma once
#include "CoreMinimal.h"
#include "SBZPropDamageContext.h"
#include "SBZPropDamageHitsSignatureDelegate.generated.h"

class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSBZPropDamageHitsSignature, UActorComponent*, PoolComponent, int32, Hits, bool, bDoCosmetics, const FSBZPropDamageContext&, DamageContext);

