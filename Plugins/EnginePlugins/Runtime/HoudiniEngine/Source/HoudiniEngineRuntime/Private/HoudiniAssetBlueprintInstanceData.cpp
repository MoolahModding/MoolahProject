#include "HoudiniAssetBlueprintInstanceData.h"

FHoudiniAssetBlueprintInstanceData::FHoudiniAssetBlueprintInstanceData() {
    this->HoudiniAsset = NULL;
    this->AssetId = 0;
    this->AssetState = EHoudiniAssetState::NeedInstantiation;
    this->SubAssetIndex = 0;
    this->AssetCookCount = 0;
    this->bHasBeenLoaded = false;
    this->bHasBeenDuplicated = false;
    this->bPendingDelete = false;
    this->bRecookRequested = false;
    this->bRebuildRequested = false;
    this->bEnableCooking = false;
    this->bForceNeedUpdate = false;
    this->bLastCookSuccess = false;
    this->bRegisteredComponentTemplate = false;
}

