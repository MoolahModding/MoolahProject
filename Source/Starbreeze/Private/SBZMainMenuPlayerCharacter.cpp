#include "SBZMainMenuPlayerCharacter.h"
#include "Components/SceneComponent.h"
#include "SBZCharacterComponent.h"
#include "SBZModularCharacterComponent.h"

ASBZMainMenuPlayerCharacter::ASBZMainMenuPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Mesh = CreateDefaultSubobject<USBZModularCharacterComponent>(TEXT("UIPlayerCharacterMesh"));
    this->Equippable = NULL;
    this->MaskEquipped = NULL;
    this->MaskDataEquipped = NULL;
    this->CharacterComponent = CreateDefaultSubobject<USBZCharacterComponent>(TEXT("CharacterComponent"));
    this->PlayerCharacterData = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}

void ASBZMainMenuPlayerCharacter::DestroyEquippable() {
}


