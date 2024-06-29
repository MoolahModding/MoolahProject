#include "SBZSpatialAudioVolume.h"

ASBZSpatialAudioVolume::ASBZSpatialAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->CullingDepthOverride = 0;
}

void ASBZSpatialAudioVolume::ResetSpatialAudioVolumeArray() {
}

void ASBZSpatialAudioVolume::Activate() {
}


