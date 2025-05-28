#pragma once
#include "CoreMinimal.h"
#include "SBZExplosivePhysicsEffectData.h"
#include "SBZGrenade.h"
#include "SBZFragGrenade.generated.h"

class ASBZFragGrenade;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class ASBZFragGrenade : public ASBZGrenade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZFragGrenade*> ClusterGrenadeArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZExplosivePhysicsEffectData PostDamagePhysicsEffectData;
    
public:
    ASBZFragGrenade(const FObjectInitializer& ObjectInitializer);

};

