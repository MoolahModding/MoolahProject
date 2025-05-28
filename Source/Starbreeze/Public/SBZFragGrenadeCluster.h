#pragma once
#include "CoreMinimal.h"
#include "SBZFragGrenade.h"
#include "SBZFragGrenadeCluster.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZFragGrenadeCluster : public ASBZFragGrenade {
    GENERATED_BODY()
public:
    ASBZFragGrenadeCluster(const FObjectInitializer& ObjectInitializer);

};

