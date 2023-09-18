#include "SBZSecuredBagVisualizeComponent.h"
#include "Net/UnrealNetwork.h"

USBZSecuredBagVisualizeComponent::USBZSecuredBagVisualizeComponent() {
    
}

void USBZSecuredBagVisualizeComponent::OnRep_BagTypes() {
}

void USBZSecuredBagVisualizeComponent::Multicast_AddBagType_Implementation(const USBZBagType* BagType) {
}

void USBZSecuredBagVisualizeComponent::AddBagHandle(FSBZBagHandle BagHandle) {
}

void USBZSecuredBagVisualizeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZSecuredBagVisualizeComponent, BagTypes);
}


