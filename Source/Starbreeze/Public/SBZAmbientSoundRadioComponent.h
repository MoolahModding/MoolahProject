#pragma once
#include "CoreMinimal.h"
#include "SBZAmbientSoundComponent.h"
#include "SBZAmbientSoundRadioComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAmbientSoundRadioComponent : public USBZAmbientSoundComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RadioSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RadioStopSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RadioPlayingChance;
    
    USBZAmbientSoundRadioComponent();

    UFUNCTION(BlueprintCallable)
    void PlayRadioSoundRand(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void PlayRadioSound(bool bValue);
    
};

