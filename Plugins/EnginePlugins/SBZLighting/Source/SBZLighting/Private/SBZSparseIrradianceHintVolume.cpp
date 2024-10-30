#include "SBZSparseIrradianceHintVolume.h"

ASBZSparseIrradianceHintVolume::ASBZSparseIrradianceHintVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSolidWhenSelected = true;
    this->Action = ESBZSparseIrradianceHintVolumeAction::ExcludeTriangles;
    this->RepulsionDistance = 50.00f;
}


