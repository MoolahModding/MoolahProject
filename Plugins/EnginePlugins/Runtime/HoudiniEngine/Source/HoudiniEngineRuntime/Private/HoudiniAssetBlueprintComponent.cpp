#include "HoudiniAssetBlueprintComponent.h"
#include "EHoudiniAssetState.h"

UHoudiniAssetBlueprintComponent::UHoudiniAssetBlueprintComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Movable;
    this->bOverrideGlobalProxyStaticMeshSettings = true;
    this->bEnableProxyStaticMeshRefinementByTimerOverride = false;
    this->bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = false;
    this->bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = false;
    this->AssetState = EHoudiniAssetState::None;
    this->FauxBPProperty = false;
    this->bHoudiniAssetChanged = false;
    this->bUpdatedFromTemplate = false;
    this->bIsInBlueprintEditor = false;
    this->bCanDeleteHoudiniNodes = false;
    this->bHasRegisteredComponentTemplate = false;
}

void UHoudiniAssetBlueprintComponent::SetToggleValueAt(const FString& Name, bool Value, int32 Index) {
}

void UHoudiniAssetBlueprintComponent::SetFloatParameter(const FString& Name, float Value, int32 Index) {
}

bool UHoudiniAssetBlueprintComponent::HasParameter(const FString& Name) {
    return false;
}


