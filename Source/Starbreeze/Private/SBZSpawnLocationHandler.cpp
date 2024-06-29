#include "SBZSpawnLocationHandler.h"
#include "Components/SceneComponent.h"

ASBZSpawnLocationHandler::ASBZSpawnLocationHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bShouldRandomizeOnBeginPlay = true;
    this->Seed = -1;
    this->HackableActor = NULL;
    this->HackableEmailIndex = -1;
    this->ImportantItem = NULL;
    this->RandomIndex = -1;
    this->bUseOnlyOneLocation = false;
}

void ASBZSpawnLocationHandler::TriggerSpawnManually() {
}

void ASBZSpawnLocationHandler::OnServerImportantLootPickedUp(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}


