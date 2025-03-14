#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZExplosionResult.h"
#include "SBZExplosive.h"
#include "SBZExplosivePhysicsEffectData.h"
#include "SBZHurtReactionData.h"
#include "SBZHurtReactionDataInterface.h"
#include "SBZMeleeComponent.generated.h"

class AActor;
class ASBZCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZMeleeComponent : public UActorComponent, public ISBZExplosive, public ISBZHurtReactionDataInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* AimAssistTargetActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZExplosivePhysicsEffectData PostDamagePhysicsEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFriendlyFireAllowedOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionData HurtReactionData;
    
public:
    USBZMeleeComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetRemoveStaggeredTagNetIDArray(const TArray<int32>& InRemoveStaggeredTagNetIDArray);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ReplicateExplosion(const FSBZExplosionResult& Result);
    

    // Fix for true pure virtual functions not being implemented
};

