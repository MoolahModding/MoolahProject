#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPD3HeistState.h"
#include "SBZAIAttractorInterface.h"
#include "SBZRoomVolumeInterface.h"
#include "SBZLure.generated.h"

class APawn;
class ASBZRoomVolume;
class UAkAudioEvent;
class UAkComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class USBZAIAttractorComponent;
class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USBZLifeActionComponent;
class USBZLifeActionInstance;
class USBZLifeActionSlot;

UCLASS(Blueprintable)
class ASBZLure : public AActor, public ISBZRoomVolumeInterface, public ISBZAIAttractorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LureRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LureNoiseStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LureNoiseStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* LureActiveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRepeatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatableCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIAttractorComponent* AttractorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLifeActionComponent* LifeActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLifeActionInstance* LifeActionInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLifeActionSlot* LifeActionSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentInvestigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZRoomVolume*> RoomVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* LureSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* EffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsPlayingEffects, meta=(AllowPrivateAccess=true))
    bool bIsPlayingEffects;
    
public:
    ASBZLure();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnServerCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION()
    void OnRep_IsPlayingEffects(bool bWasPlayingEffects);
    
    UFUNCTION()
    void OnClientCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActiveStateChanged(bool bIsActive, bool bDoCosmetics);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StopEffects();
    
    UFUNCTION()
    void MakeLureNoise();
    
    UFUNCTION()
    void HandleHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetEnabled(bool bEnabled) override PURE_VIRTUAL(SetEnabled, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAttractorInstigator(APawn* NewInstigator) override PURE_VIRTUAL(SetAttractorInstigator,);
    
};

