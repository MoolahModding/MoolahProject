#include "AkMediaAsset.h"

UAkMediaAsset::UAkMediaAsset() {
    this->Id = 0;
    this->AutoLoad = true;
    this->Language = TEXT("SFX");
    this->CurrentMediaAssetData = NULL;
}


