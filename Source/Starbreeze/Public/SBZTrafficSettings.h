#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZTrafficCivilians.h"
#include "SBZTrafficFBIVan.h"
#include "SBZTrafficFirstResponders.h"
#include "SBZTrafficSoundHorn.h"
#include "SBZTrafficSwatVans.h"
#include "SBZTrafficSettings.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class USBZTrafficSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTrafficFirstResponders FirstResponders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTrafficFBIVan FBIVan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTrafficSwatVans SwatVans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTrafficCivilians Civilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTrafficSoundHorn SoundHorn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleSpawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleWantedStopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridlockBreakCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PedestrianGreenSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PedestrianRedSoundEvent;
    
    USBZTrafficSettings();

};

