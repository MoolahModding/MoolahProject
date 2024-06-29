#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZAISightBlockerInterface.h"
#include "SBZAISightModifierVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ASBZAISightModifierVolume : public AActor, public ISBZAISightBlockerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* VolumeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthSightModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoudSightModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsActive, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
public:
    ASBZAISightModifierVolume(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSightModifierVolumeActive(bool bSetActive);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsActive();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveStateChanged(bool bSetActive, bool bDoCosmetics);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnEffectActivated(bool bSetActive);
    

    // Fix for true pure virtual functions not being implemented
};

