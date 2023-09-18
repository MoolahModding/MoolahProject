#include "SBZPostProcessSettingsPresetDataAsset.h"

USBZPostProcessSettingsPresetDataAsset::USBZPostProcessSettingsPresetDataAsset() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPostProcessSettingsPresetDataAsset::StaticClass();
}


