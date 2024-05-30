#pragma once
#include "CoreMinimal.h"
#include "SBZRangedWeapon.h"
#include "SBZRangedProjectileWeapon.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZRangedProjectileWeapon : public ASBZRangedWeapon {
    GENERATED_BODY()
public:
    ASBZRangedProjectileWeapon(const FObjectInitializer& ObjectInitializer);

};

