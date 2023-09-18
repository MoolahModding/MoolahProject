#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SBZKnifeProjectileTargetData.h"
#include "SBZThrowable.h"
#include "SBZThrowableKnife.generated.h"

class AActor;
class ASBZAIPointOfInterest;
class ASBZAmmoPickup;
class UAkAudioEvent;
class UBoxComponent;
class UClass;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class ASBZThrowableKnife : public ASBZThrowable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OverrideThrowableProjectileHitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OverrideThrowableProjectileBounceHitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AmmoPickupAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ThrowableKnifePOIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIPointOfInterest* ThrowableKnifePOIInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* LastHitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAmmoPickup* AmmoPickup;
    
public:
    ASBZThrowableKnife(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReplicateDamage(const FSBZKnifeProjectileTargetData& TargetData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PickedUp();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CreateImpact(bool bInShouldBladeBounce, bool bInHasRetrieverSkill, UPrimitiveComponent* InHitComponent, const FName& InBoneName, const FVector& InRelativeLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnParentActorEndPlay(AActor* OldAttachParentActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_FireKnife(const FSBZKnifeProjectileTargetData& TargetData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CreateImpact(bool bInShouldBladeBounce, bool bInHasRetrieverSkill);
    
};

