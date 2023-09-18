#include "SBZGrenadeData.h"

USBZGrenadeData::USBZGrenadeData() {
    this->Range = 500.00f;
    this->AdditionalPlayerRange = 0.00f;
    this->Delay = 3.00f;
    this->DetonationEvent = NULL;
    this->DropDetonationEvent = NULL;
    this->ArmEvent = NULL;
    this->bArmOnThrow = true;
    this->DetonationEffect = NULL;
    this->DropDetonationEffect = NULL;
    this->LocalplayerFeedback = NULL;
    this->LocalplayerFeedback = NULL;
    this->TacticianDiscombobulateEffectClass = NULL;
    this->TacticianDiscombobulateEffectClass = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZGrenadeData::StaticClass();
}


