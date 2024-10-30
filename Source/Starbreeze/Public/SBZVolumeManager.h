#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZVolumeType.h"
#include "SBZVolumeTypeSetting.h"
#include "SBZVolumeManager.generated.h"

class UAkAudioEvent;
class USBZVolumeManager;

UCLASS(Blueprintable)
class USBZVolumeManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVolumeTypeSetting MasterVolumeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVolumeTypeSetting MusicVolumeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVolumeTypeSetting SFXVolumeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVolumeTypeSetting VOVolumeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVolumeTypeSetting HUDVolumeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVolumeTypeSetting VoipVolumeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVolumeTypeSetting VoipMicVolumeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVolumeTypeSetting CinematicVolumeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ESBZVolumeType> PausedMuteSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PauseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ResumeEvent;
    
public:
    USBZVolumeManager();

    UFUNCTION(BlueprintCallable)
    void UpdateVOIPVolumeOnEOSLogin(int32 InUserIndex, const FString& NativePlatformUserId, const FString& EOSPlatformProductUserId, bool bLoginSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZVolumeManager* GetVolumeManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetRelativeCinematicVolume();
    
};

