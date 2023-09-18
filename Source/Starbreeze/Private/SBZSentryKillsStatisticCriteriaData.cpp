#include "SBZSentryKillsStatisticCriteriaData.h"

USBZSentryKillsStatisticCriteriaData::USBZSentryKillsStatisticCriteriaData() {
    this->SentryKills = 10;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSentryKillsStatisticCriteriaData::StaticClass();
}


