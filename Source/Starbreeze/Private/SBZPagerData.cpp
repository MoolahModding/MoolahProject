#include "SBZPagerData.h"

USBZPagerData::USBZPagerData() {
    this->bCanRestart = false;
    this->TimoutDuration = 5.00f;
    this->Marker = NULL;
    this->Outline = NULL;
    this->MarkerSocket = TEXT("LeftUpLeg");
    this->StartAudioEvent = NULL;
    this->RestartAudioEvent = NULL;
    this->StopAudioEvent = NULL;
    this->TimeoutAudioEvent = NULL;
    this->TimeoutFailAudioEvent = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPagerData::StaticClass();
}


