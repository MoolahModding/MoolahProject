#include "SBZMainMenuPlayerCharacter.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"
#include "SBZCharacterComponent.h"
#include "SBZModularCharacterComponent.h"

ASBZMainMenuPlayerCharacter::ASBZMainMenuPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Mesh = CreateDefaultSubobject<USBZModularCharacterComponent>(TEXT("UIPlayerCharacterMesh"));
    this->Equippable = NULL;
    this->MaskEquipped = NULL;
    this->CharacterComponent = CreateDefaultSubobject<USBZCharacterComponent>(TEXT("CharacterComponent"));
    this->PlayerCharacterData = NULL;
    this->StartMontageName = ESBZMainMenuAnimationName::IdleSequence;
    this->PreferredEquippableIndex = 0;
    this->NameplateWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("NameplateWidget"));
    this->RandomSeed = -1;
    this->Mesh->SetupAttachment(RootComponent);
    this->NameplateWidgetComponent->SetupAttachment(Mesh);
}

void ASBZMainMenuPlayerCharacter::OnChunkInstall(bool bIsGameInstallPending) {
}

void ASBZMainMenuPlayerCharacter::DestroyEquippable() {
}


