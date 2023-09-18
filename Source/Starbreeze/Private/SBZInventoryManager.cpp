#include "SBZInventoryManager.h"
#include "SBZPlayerInventory.h"

USBZInventoryManager::USBZInventoryManager() {
    this->PlayerInventory = CreateDefaultSubobject<USBZPlayerInventory>(TEXT("SBZPlayerInventory"));
}

void USBZInventoryManager::GetCosmeticsInventoryItemsForType(const USBZCosmeticsPartSlot* CosmeticsPartSlot, TArray<FSBZCosmeticsInventoryItem>& CosmeticsInventoryItemArrayOut) {
}

USBZInventoryManager* USBZInventoryManager::BP_GetInventoryManager(const UObject* WorldContextObject) {
    return NULL;
}


