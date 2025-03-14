#pragma once
#include "CoreMinimal.h"
#include "SBZGrenadeProjectile.h"
#include "SBZPlayerMambaGrenadeProjectile.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZPlayerMambaGrenadeProjectile : public ASBZGrenadeProjectile {
    GENERATED_BODY()
public:
    ASBZPlayerMambaGrenadeProjectile(const FObjectInitializer& ObjectInitializer);

};

