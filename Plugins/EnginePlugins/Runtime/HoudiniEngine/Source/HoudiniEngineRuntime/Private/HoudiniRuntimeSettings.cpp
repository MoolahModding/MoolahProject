#include "HoudiniRuntimeSettings.h"

UHoudiniRuntimeSettings::UHoudiniRuntimeSettings() {
    this->SessionType = HRSST_NamedPipe;
    this->ServerHost = TEXT("localhost");
    this->ServerPort = 9090;
    this->ServerPipeName = TEXT("hapi");
    this->bStartAutomaticServer = true;
    this->AutomaticServerTimeout = 3000.00f;
    this->bSyncWithHoudiniCook = true;
    this->bCookUsingHoudiniTime = true;
    this->bSyncViewport = false;
    this->bSyncHoudiniViewport = false;
    this->bSyncUnrealViewport = false;
    this->bShowMultiAssetDialog = true;
    this->bPreferHdaMemoryCopyOverHdaSourceFile = false;
    this->bPauseCookingOnStart = false;
    this->bDisplaySlateCookingNotifications = true;
    this->DefaultTemporaryCookFolder = TEXT("/Game/HoudiniEngine/Temp");
    this->DefaultBakeFolder = TEXT("/Game/HoudiniEngine/Bake");
    this->MarshallingLandscapesUseDefaultUnrealScaling = false;
    this->MarshallingLandscapesUseFullResolution = true;
    this->MarshallingLandscapesForceMinMaxValues = false;
    this->MarshallingLandscapesForcedMinValue = -2000.00f;
    this->MarshallingLandscapesForcedMaxValue = 4553.00f;
    this->bAddRotAndScaleAttributesOnCurves = false;
    this->MarshallingSplineResolution = 50.00f;
    this->bEnableProxyStaticMesh = false;
    this->bShowDefaultMesh = true;
    this->bEnableProxyStaticMeshRefinementByTimer = true;
    this->ProxyMeshAutoRefineTimeoutSeconds = 10.00f;
    this->bEnableProxyStaticMeshRefinementOnPreSaveWorld = true;
    this->bEnableProxyStaticMeshRefinementOnPreBeginPIE = true;
    this->bDoubleSidedGeometry = false;
    this->PhysMaterial = NULL;
    this->CollisionTraceFlag = CTF_UseDefault;
    this->LightMapResolution = 32;
    this->LpvBiasMultiplier = 0.00f;
    this->GeneratedDistanceFieldResolutionScale = 0.00f;
    this->LightMapCoordinateIndex = 1;
    this->bUseMaximumStreamingTexelRatio = false;
    this->StreamingDistanceMultiplier = 1.00f;
    this->FoliageDefaultSettings = NULL;
    this->bUseFullPrecisionUVs = false;
    this->SrcLightmapIndex = 0;
    this->DstLightmapIndex = 1;
    this->MinLightmapResolution = 64;
    this->bRemoveDegenerates = true;
    this->GenerateLightmapUVsFlag = HRSRF_OnlyIfMissing;
    this->RecomputeNormalsFlag = HRSRF_OnlyIfMissing;
    this->RecomputeTangentsFlag = HRSRF_OnlyIfMissing;
    this->bUseMikkTSpace = true;
    this->bBuildAdjacencyBuffer = true;
    this->bComputeWeightedNormals = false;
    this->bBuildReversedIndexBuffer = true;
    this->bUseHighPrecisionTangentBasis = false;
    this->DistanceFieldResolutionScale = 2.00f;
    this->bGenerateDistanceFieldAsIfTwoSided = false;
    this->bSupportFaceRemap = false;
    this->bPDGAsyncCommandletImportEnabled = false;
    this->bEnableBackwardCompatibility = true;
    this->bAutomaticLegacyHDARebuild = false;
    this->bUseCustomHoudiniLocation = false;
    this->HoudiniExecutable = HRSHE_Houdini;
    this->CookingThreadStackSize = -1;
}


