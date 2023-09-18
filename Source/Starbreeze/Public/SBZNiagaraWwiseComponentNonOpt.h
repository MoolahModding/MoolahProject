#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBZNiagaraWwiseComponentNonOpt.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZNiagaraWwiseComponentNonOpt : public USceneComponent {
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
    UAkComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneShotEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RtpcUpdateValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RtpcInterpolationTimerMS;
    
public:
    USBZNiagaraWwiseComponentNonOpt();

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
    void DeactivateComponent();
    
    UFUNCTION(BlueprintCallable)
    void ActivateComponent();
    
};

