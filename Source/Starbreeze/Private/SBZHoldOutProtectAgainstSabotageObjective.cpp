#include "SBZHoldOutProtectAgainstSabotageObjective.h"

USBZHoldOutProtectAgainstSabotageObjective::USBZHoldOutProtectAgainstSabotageObjective() {
    this->Health = 100;
    this->TagEventProvider = NULL;
    this->DamagePerSabotageEvent = 10;
}

void USBZHoldOutProtectAgainstSabotageObjective::OnTagEventActiveChanged(const FGameplayTag& Tag, bool bIsTagActive) {
}


