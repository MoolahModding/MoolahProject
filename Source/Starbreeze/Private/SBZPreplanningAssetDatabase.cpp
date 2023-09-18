#include "SBZPreplanningAssetDatabase.h"

USBZPreplanningAssetDatabase::USBZPreplanningAssetDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPreplanningAssetDatabase::StaticClass();
}


