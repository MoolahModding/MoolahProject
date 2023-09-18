#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZNiagaraWwiseActor.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UNiagaraComponent;
class UNiagaraSystem;
class USBZAmbientSoundComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZNiagaraWwiseActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventToPlayOneShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventToStopPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* Rtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraEffectOneShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraEffect;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAmbientSoundComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayFromBeginning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneShotEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RtpcUpdateValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RtpcInterpolationTimerMS;
    
public:
    ASBZNiagaraWwiseActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateRtpc(float RtpcValue, float RtpcInterpolationValue);
    
    UFUNCTION(BlueprintCallable)
    void StopEffectsLoop();
    
    UFUNCTION(BlueprintCallable)
    void PlayEffectsOneShot();
    
    UFUNCTION(BlueprintCallable)
    void PlayEffectsLoop();
    
    UFUNCTION(BlueprintCallable)
    void DestroyComponents();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateActor();
    
    UFUNCTION(BlueprintCallable)
    void ActivateActor();
    
};

