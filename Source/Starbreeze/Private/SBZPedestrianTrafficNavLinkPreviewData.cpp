#include "SBZPedestrianTrafficNavLinkPreviewData.h"

USBZPedestrianTrafficNavLinkPreviewData::USBZPedestrianTrafficNavLinkPreviewData() {
    this->SkeletalMesh = NULL;
    this->Animation = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPedestrianTrafficNavLinkPreviewData::StaticClass();
}


