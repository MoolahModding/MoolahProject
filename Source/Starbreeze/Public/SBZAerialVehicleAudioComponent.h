#pragma once
#include "CoreMinimal.h"
#include "SBZAmbientSoundComponent.h"
#include "SBZAerialVehicleAudioComponent.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAerialVehicleAudioComponent : public USBZAmbientSoundComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EngineSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EngineStopSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollisionTyresSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollisionBodySoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RadioSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RadioStopSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SpotlightOnSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SpotlightOffSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* EngineRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CollisionTyresRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CollisionBodyRTPC;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngineSoundMultiplicationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TyreSoundMultiplicationValue;
    
public:
    USBZAerialVehicleAudioComponent();

    UFUNCTION(BlueprintCallable)
    void StopEngineSound();
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleEngineSpeed(float EngineValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTyreCollisionImpact(float CollisionSpeedValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyCollisionImpact(float CollisionSpeedValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayVehicleRadioSound(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayVehicleCollisionSound(float CollisionValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayTyreCollisionSound(float CollisionValue);
    
    UFUNCTION(BlueprintCallable)
    void PlaySpotlightSound(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayEngineSound(float EngineValue);
    
    UFUNCTION(BlueprintCallable)
    void DisableSounds();
    
};

