#pragma once
#include "CoreMinimal.h"
#include "SBZGasGrenade.h"
#include "SBZSmokeGrenade.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZSmokeGrenade : public ASBZGasGrenade {
    GENERATED_BODY()
public:
    ASBZSmokeGrenade(const FObjectInitializer& ObjectInitializer);

};

