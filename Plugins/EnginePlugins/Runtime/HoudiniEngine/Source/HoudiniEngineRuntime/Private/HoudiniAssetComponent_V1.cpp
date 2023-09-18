#include "HoudiniAssetComponent_V1.h"

UHoudiniAssetComponent_V1::UHoudiniAssetComponent_V1() {
    this->bGeneratedDoubleSidedGeometry = false;
    this->GeneratedPhysMaterial = NULL;
    this->GeneratedCollisionTraceFlag = CTF_UseDefault;
    this->GeneratedLightMapResolution = 0;
    this->GeneratedDistanceFieldResolutionScale = 0.00f;
    this->GeneratedLightMapCoordinateIndex = 0;
    this->bGeneratedUseMaximumStreamingTexelRatio = false;
    this->GeneratedStreamingDistanceMultiplier = 0.00f;
    this->GeneratedFoliageDefaultSettings = NULL;
}


