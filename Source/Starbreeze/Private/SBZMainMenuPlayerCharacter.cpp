#include "SBZMainMenuPlayerCharacter.h"
#include "SBZCharacterComponent.h"
#include "SBZModularCharacterComponent.h"

void ASBZMainMenuPlayerCharacter::DestroyEquippable() {
}

ASBZMainMenuPlayerCharacter::ASBZMainMenuPlayerCharacter() {
    this->Mesh = CreateDefaultSubobject<USBZModularCharacterComponent>(TEXT("UIPlayerCharacterMesh"));
    this->Equippable = NULL;
    this->MaskEquipped = NULL;
    this->MaskDataEquipped = NULL;
    this->CharacterComponent = CreateDefaultSubobject<USBZCharacterComponent>(TEXT("CharacterComponent"));
    this->PlayerCharacterData = NULL;
}

