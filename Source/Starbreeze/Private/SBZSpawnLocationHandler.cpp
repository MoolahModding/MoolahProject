#include "SBZSpawnLocationHandler.h"
#include "Components/SceneComponent.h"

ASBZSpawnLocationHandler::ASBZSpawnLocationHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldRandomizeOnBeginPlay = true;
    this->Seed = -1;
    this->HackableActor = NULL;
    this->HackableEmailIndex = -1;
    this->ImportantItem = NULL;
    this->ImportantItem = NULL;
    this->RandomIndex = -1;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZSpawnLocationHandler::TriggerSpawnManually() {
}

void ASBZSpawnLocationHandler::OnServerImportantLootPickedUp(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}


