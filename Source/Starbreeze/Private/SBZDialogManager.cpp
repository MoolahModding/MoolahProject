#include "SBZDialogManager.h"

USBZDialogManager::USBZDialogManager() {
    this->Narrator = NULL;
    FProperty* p_bReplicates = GetClass()->FindPropertyByName("bReplicates");
    *p_bReplicates->ContainerPtrToValuePtr<uint8>(this) = true;
}

void USBZDialogManager::Multicast_PlayDialog_Implementation(const USBZDialogDataAsset* DialogDataAsset, const TArray<AActor*>& Performers, AActor* DialogInstigator) {
}


