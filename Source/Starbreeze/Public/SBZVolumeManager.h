#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZVolumeTypeSetting.h"
#include "SBZVolumeManager.generated.h"

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
    FSBZVolumeTypeSetting CinematicVolumeSetting;
    
public:
    USBZVolumeManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZVolumeManager* GetVolumeManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetRelativeCinematicVolume();
    
};

