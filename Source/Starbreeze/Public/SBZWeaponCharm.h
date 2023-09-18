#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableCharm.h"
#include "SBZWeaponCharm.generated.h"

UCLASS(Blueprintable)
class ASBZWeaponCharm : public ASBZEquippableCharm {
    GENERATED_BODY()
public:
    ASBZWeaponCharm(const FObjectInitializer& ObjectInitializer);

};

