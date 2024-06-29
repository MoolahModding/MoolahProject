#pragma once
#include "CoreMinimal.h"
#include "AkSpatialAudioVolume.h"
#include "SBZSpatialAudioVolume.generated.h"

class ASBZSpatialAudioVolume;

UCLASS(Blueprintable)
class ASBZSpatialAudioVolume : public AAkSpatialAudioVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AcousticState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EchoState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZSpatialAudioVolume*> OverlappingSpatialVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CullingDepthOverride;
    
    ASBZSpatialAudioVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetSpatialAudioVolumeArray();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

