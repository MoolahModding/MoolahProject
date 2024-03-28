#pragma once
#include "CoreMinimal.h"
#include "SBZSettingsFunctions.h"
#include "SBZSettingsFunctionsAudio.generated.h"

class UObject;

UCLASS(Blueprintable)
class USBZSettingsFunctionsAudio : public USBZSettingsFunctions {
    GENERATED_BODY()
public:
    USBZSettingsFunctionsAudio();
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetVOVolume(UObject* WorldContextObject, float Volume);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetVoIPVolume(UObject* WorldContextObject, float Volume);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetSFXVolume(UObject* WorldContextObject, float Volume);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetMusicVolume(UObject* WorldContextObject, float Volume);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetMasterVolume(UObject* WorldContextObject, float Volume);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static void SetCinematicVolume(UObject* WorldContextObject, float Volume);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetVOVolume(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetVoIPVolume(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetSFXVolume(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetMusicVolume(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetMasterVolume(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultVOVolume(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultVoIPVolume(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultSFXVolume(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultMusicVolume(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultMasterVolume(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetDefaultCinematicVolume(UObject* WorldContextObject);
    
    UFUNCTION(meta=(WorldContext="WorldContextObject"))
    static float GetCinematicVolume(UObject* WorldContextObject);
    
};

