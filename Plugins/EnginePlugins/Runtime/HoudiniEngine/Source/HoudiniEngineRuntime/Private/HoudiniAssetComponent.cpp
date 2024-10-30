#include "HoudiniAssetComponent.h"

UHoudiniAssetComponent::UHoudiniAssetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->Mobility = EComponentMobility::Static;
    this->bUseAsOccluder = true;
    this->CastShadow = true;
    this->HoudiniAsset = NULL;
    this->bCookOnParameterChange = true;
    this->bUploadTransformsToHoudiniEngine = true;
    this->bCookOnTransformChange = false;
    this->bCookOnAssetInputCook = true;
    this->bOutputless = false;
    this->bOutputTemplateGeos = false;
    this->bUseOutputNodes = true;
    this->StaticMeshMethod = EHoudiniStaticMeshMethod::RawMesh;
    this->bOverrideGlobalProxyStaticMeshSettings = false;
    this->bEnableProxyStaticMeshOverride = false;
    this->bEnableProxyStaticMeshRefinementByTimerOverride = true;
    this->ProxyMeshAutoRefineTimeoutSecondsOverride = 10.00f;
    this->bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = true;
    this->bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = true;
    this->AssetId = -1;
    this->AssetState = EHoudiniAssetState::NewHDA;
    this->DebugLastAssetState = EHoudiniAssetState::NeedInstantiation;
    this->AssetStateResult = EHoudiniAssetStateResult::None;
    this->SubAssetIndex = 4294967295;
    this->AssetCookCount = 0;
    this->bHasBeenLoaded = false;
    this->bHasBeenDuplicated = false;
    this->bPendingDelete = false;
    this->bRecookRequested = false;
    this->bRebuildRequested = false;
    this->bEnableCooking = true;
    this->bForceNeedUpdate = false;
    this->bLastCookSuccess = false;
    this->bParameterDefinitionUpdateNeeded = false;
    this->bBlueprintStructureModified = false;
    this->bBlueprintModified = false;
    this->bHasComponentTransformChanged = false;
    this->bFullyLoaded = false;
    this->PDGAssetLink = NULL;
    this->bNoProxyMeshNextCookRequested = false;
    this->bBakeAfterNextCook = false;
    this->bCachedIsPreview = false;
    this->LastTickTime = 0.00f;
}


