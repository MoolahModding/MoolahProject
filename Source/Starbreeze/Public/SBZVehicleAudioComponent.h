#pragma once
#include "CoreMinimal.h"
#include "SBZAmbientSoundComponent.h"
#include "SBZVehicleAudioComponent.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZVehicleAudioComponent : public USBZAmbientSoundComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VehicleTypeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EngineSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EngineStopSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TyreFrictionSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TyreFrictionStopSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BrakeSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BrakeStopSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollisionTiresSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollisionBodySoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TireFrictionSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SignalSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SignalStopSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RadioSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RadioStopSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HelicopterRotaryBladesSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HelicopterRotaryBladesStopSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* EngineRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CollisionTiresRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CollisionBodyRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* FrictionTiresRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* HelicopterRotaryBladesRTPC;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngineSoundMultiplicationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakeSoundMultiplicationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TyreSoundMultiplicationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BladeSoundMultiplicationValue;
    
public:
    USBZVehicleAudioComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopTyreFrictionSound();
    
    UFUNCTION(BlueprintCallable)
    void StopEngineSound();
    
    UFUNCTION(BlueprintCallable)
    void StopBrakeSound();
    
    UFUNCTION(BlueprintCallable)
    void SetTyreFriction(float FrictionSpeedValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTyreCollisionImpact(float CollisionSpeedValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHelicopterVehicleEngineSpeed(float EngineValue, float BladeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCarVehicleEngineSpeed(float EngineValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyCollisionImpact(float CollisionSpeedValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayVehicleRadioSounds(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayVehicleHornSounds();
    
    UFUNCTION(BlueprintCallable)
    void PlayVehicleCollisionSounds(float CollisionValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayTyreFrictionSound(float EngineValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayTireCollisionSounds(float CollisionValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayEngineSounds(float EngineValue, float BladeValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayEngineSound(float EngineValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayBrakeSound(float BreakDistance);
    
    UFUNCTION(BlueprintCallable)
    void DisableSounds();
    
};

