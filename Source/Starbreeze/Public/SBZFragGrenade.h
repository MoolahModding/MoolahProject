#pragma once
#include "CoreMinimal.h"
#include "SBZExplosivePhysicsEffectData.h"
#include "SBZGrenade.h"
#include "SBZFragGrenade.generated.h"

class USphereComponent;

UCLASS(Abstract, Blueprintable)
class ASBZFragGrenade : public ASBZGrenade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollision;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZExplosivePhysicsEffectData PostDamagePhysicsEffectData;
    
public:
    ASBZFragGrenade();
};

