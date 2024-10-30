#include "SBZFirstAidPack.h"
#include "SBZConsumableInteractableComponent.h"

ASBZFirstAidPack::ASBZFirstAidPack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZConsumableInteractableComponent>(TEXT("SBZInteractableComponent"))) {
    this->Tags.AddDefaulted(1);
    this->bIsInventory = false;
    this->bIsAIPlaced = true;
}


