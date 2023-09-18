#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "SBZAmbientSoundComponent.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;
class UAkSwitchValue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZAmbientSoundComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AmbientAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSoundComponentEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveAreaAttenuationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> AudioSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasEndpoints;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AttenuationSquared;
    
public:
    USBZAmbientSoundComponent();

    UFUNCTION(BlueprintCallable)
    void SetSwitchState(const UAkSwitchValue* SwitchValue, const FString& InSwitchGroup, const FString& InSwitchState);
    
    UFUNCTION(BlueprintCallable)
    void SetRTPCValue(UAkRtpc* InRtpc, float Value, int32 InterpolationTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioEvent(UAkAudioEvent* InAkAudioEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAmbientSoundComponentEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttenuation() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableAmbientSoundComponent();
    
    UFUNCTION(BlueprintCallable)
    void DisableAmbientSoundComponent(UAkAudioEvent* AkAudioCloseEvent, const FString& NewEventName);
    
};

