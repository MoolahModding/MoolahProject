#include "SBZSparseIrradianceHintVolume.h"

ASBZSparseIrradianceHintVolume::ASBZSparseIrradianceHintVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Action = ESBZSparseIrradianceHintVolumeAction::ExcludeTriangles;
    this->RepulsionDistance = 50.00f;
    this->bSolidWhenSelected = true;
}


