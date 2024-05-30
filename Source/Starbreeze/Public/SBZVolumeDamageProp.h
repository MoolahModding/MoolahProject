#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZVolumeDamageInterface.h"
#include "SBZVolumeDamageProp.generated.h"

class ATriggerVolume;
class IAbilitySystemInterface;
class UAbilitySystemInterface;
class UNiagaraComponent;
class UNiagaraSystem;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ASBZVolumeDamageProp : public AActor, public ISBZVolumeDamageInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ATriggerVolume> VolumeSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> EffectInnerLocationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectInnerLocationArrayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectInnerLocationCountName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> EffectBorderLocationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectBorderLocationArrayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectBorderLocationCountName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectDurationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* EffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* EffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEffectRotationSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsCollisionEnabled, meta=(AllowPrivateAccess=true))
    bool bIsCollisionEnabled;
    
public:
    ASBZVolumeDamageProp(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetServerDamageEnabled(const TScriptInterface<IAbilitySystemInterface>& AbilitySystemScriptInterface, bool bIsEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnVolumeCollisionChanged(UPrimitiveComponent* ChangedComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsCollisionEnabled();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CollisionEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnVolumeEnabledChanged(bool bIsEnabled);
    

    // Fix for true pure virtual functions not being implemented
};

