#pragma once
#include "CoreMinimal.h"
#include "SBZAmbientSoundComponent.h"
#include "SBZWheeledVehicleAudioComponent.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZWheeledVehicleAudioComponent : public USBZAmbientSoundComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* SirenAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SirenSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SirenStopSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EngineSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EngineStopSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BrakeSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BrakeStopSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollisionTiresSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollisionBodySoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TyreFrictionSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TyreFrictionStopSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SignalSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SignalStopSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* EngineRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* BrakeRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CollisionTiresRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CollisionBodyRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* FrictionTiresRTPC;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngineSoundMultiplicationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakeSoundMultiplicationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TyreSoundMultiplicationValue;
    
public:
    USBZWheeledVehicleAudioComponent();

    UFUNCTION(BlueprintCallable)
    void StopTyreFrictionSound();
    
    UFUNCTION(BlueprintCallable)
    void StopSirenSound();
    
    UFUNCTION(BlueprintCallable)
    void StopEngineSound();
    
    UFUNCTION(BlueprintCallable)
    void StopBreakSound();
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleEngineSpeed(float EngineValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleBreakIntencity(float EngineValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTyreFriction(float FrictionSpeedValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTyreCollisionImpact(float CollisionSpeedValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyCollisionImpact(float CollisionSpeedValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayVehicleHornSound();
    
    UFUNCTION(BlueprintCallable)
    void PlayVehicleCollisionSound(float CollisionValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayTyreFrictionSound(float EngineValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayTyreCollisionSound(float CollisionValue);
    
    UFUNCTION(BlueprintCallable)
    void PlaySirenSound();
    
    UFUNCTION(BlueprintCallable)
    void PlayEngineSound(float EngineValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayBreakSound(float BreakDistance);
    
};

