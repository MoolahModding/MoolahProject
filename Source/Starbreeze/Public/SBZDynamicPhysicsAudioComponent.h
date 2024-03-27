#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "SBZDynamicPhysicsAudioComponent.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class USBZSurfaceTypesConfig;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZDynamicPhysicsAudioComponent : public UAkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RollingStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RollingStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ImpactEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* RollingSpeedRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* ImpactForceRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartRollingInterpolationTimeInMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateRollingInterpolationTimeInMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollingSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactForceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactForceMultiplicationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollingSpeedMultiplicationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSurfaceTypesConfig* OwnedSurfaceType;
    
public:
    USBZDynamicPhysicsAudioComponent();
    UFUNCTION()
    void UpdateRollingVelocity(float Value);
    
    UFUNCTION()
    void UpdateImpactVelocity(float Value);
    
    UFUNCTION()
    void StopRollingSound();
    
    UFUNCTION()
    void PlayRollingSound(float Value);
    
    UFUNCTION()
    void PlayImpactSound(float Value);
    
    UFUNCTION()
    void OnDisable();
    
};

