#include "SBZPlayerThrowableKnifeData.h"

USBZPlayerThrowableKnifeData::USBZPlayerThrowableKnifeData() {
    this->SoundRangePOI = 1500.00f;
    this->ShatteredEvent = NULL;
    this->ReadyEvent = NULL;
    this->ThrownEvent = NULL;
    this->ShatteredEffect = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerThrowableKnifeData::StaticClass();
}


