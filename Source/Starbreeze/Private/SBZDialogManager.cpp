#include "SBZDialogManager.h"

USBZDialogManager::USBZDialogManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Narrator = NULL;
    this->QueuedDialog = NULL;
}

void USBZDialogManager::Multicast_PlayDialog_Implementation(const USBZDialogDataAsset* DialogDataAsset, const TArray<AActor*>& Performers, AActor* DialogInstigator, bool bCanBeQueued) {
}


