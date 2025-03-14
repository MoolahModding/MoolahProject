#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerMambaGrenadeProjectile.h"
#include "SBZPlayerGrenadeProjectileCluster.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZPlayerGrenadeProjectileCluster : public ASBZPlayerMambaGrenadeProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalRandomDelay;
    
public:
    ASBZPlayerGrenadeProjectileCluster(const FObjectInitializer& ObjectInitializer);

};

