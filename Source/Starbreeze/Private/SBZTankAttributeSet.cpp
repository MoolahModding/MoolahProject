#include "SBZTankAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZTankAttributeSet::OnRep_VisorArmor(const FGameplayAttributeData& OldValue) {
}

void USBZTankAttributeSet::Multicast_SetVisorArmor_Implementation(float NewCurrentValue) {
}

void USBZTankAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZTankAttributeSet, VisorArmor);
}

USBZTankAttributeSet::USBZTankAttributeSet() {
    this->TankComponent = NULL;
}

