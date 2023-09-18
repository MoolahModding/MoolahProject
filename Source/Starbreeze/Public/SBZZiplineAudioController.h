#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZZiplineAudioController.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZZiplineAudioController : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ZiplineStartAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ZiplineStopAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* ZiplineVelocityRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* CharacterPerspectiveRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZiplineActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineSoundMultiplicationValue;
    
public:
    USBZZiplineAudioController();

    UFUNCTION(BlueprintCallable)
    void UpdateZiplineRtpc(float ZiplineVelocity);
    
    UFUNCTION(BlueprintCallable)
    void StopZiplineAudio();
    
    UFUNCTION(BlueprintCallable)
    void StartZiplineAudio();
    
    UFUNCTION(BlueprintCallable)
    void SetZiplineRtpcPerspective(bool bLocalPlayer);
    
};

