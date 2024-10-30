#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZHoldOutDroneVoiceComponent.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZHoldOutDroneVoiceComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UAkAudioEvent*, float> CoolDowns;
    
public:
    USBZHoldOutDroneVoiceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopCurrentVO();
    
    UFUNCTION(BlueprintCallable)
    void PlayVO(UAkAudioEvent* AudioEvent, int32 Priority, float CoolDown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingVO() const;
    
};

