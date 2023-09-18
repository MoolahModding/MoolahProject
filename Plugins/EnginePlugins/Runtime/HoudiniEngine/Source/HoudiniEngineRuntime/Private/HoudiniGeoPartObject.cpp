#include "HoudiniGeoPartObject.h"

FHoudiniGeoPartObject::FHoudiniGeoPartObject() {
    this->AssetId = 0;
    this->ObjectId = 0;
    this->GeoId = 0;
    this->PartId = 0;
    this->bHasCustomPartName = false;
    this->Type = EHoudiniPartType::Invalid;
    this->InstancerType = EHoudiniInstancerType::Invalid;
    this->bHasEditLayers = false;
    this->VolumeTileIndex = 0;
    this->bIsVisible = false;
    this->bIsEditable = false;
    this->bIsTemplated = false;
    this->bIsInstanced = false;
    this->bHasGeoChanged = false;
    this->bHasPartChanged = false;
    this->bHasTransformChanged = false;
    this->bHasMaterialsChanged = false;
}

