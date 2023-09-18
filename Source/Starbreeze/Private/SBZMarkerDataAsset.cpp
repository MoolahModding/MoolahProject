#include "SBZMarkerDataAsset.h"

USBZMarkerDataAsset::USBZMarkerDataAsset() {
    this->MarkerWidgetOverride = NULL;
    this->MarkerWidgetOverride = NULL;
    this->bHasOffScreenTracking = true;
    this->bShowDistance = true;
    this->OnDisplayAudioEvent = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMarkerDataAsset::StaticClass();
}


