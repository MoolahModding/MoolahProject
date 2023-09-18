#include "SBZAICrewState.h"
#include "Net/UnrealNetwork.h"

ASBZAICrewState::ASBZAICrewState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Character = NULL;
    this->CharacterClass = NULL;
    this->CharacterClass = NULL;
    this->DefeatState = EPD3DefeatState::None;
    this->OldDefeatState = EPD3DefeatState::None;
    this->bIsMaskOn = false;
    this->bAlwaysRelevant = true;
    this->bNetLoadOnClient = false;
    this->bAllowTickBeforeBeginPlay = false;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
}

void ASBZAICrewState::OnRep_IsMaskOn() {
}

void ASBZAICrewState::OnRep_DefeatState(EPD3DefeatState InOldDefeatState) {
}

void ASBZAICrewState::OnRep_Character(ASBZAICrewCharacter* OldCharacter) {
}

void ASBZAICrewState::Multicast_SetMaskOn_Implementation(bool bMaskOn) {
}

void ASBZAICrewState::Multicast_SetDefeatState_Implementation(EPD3DefeatState InState) {
}

FText ASBZAICrewState::GetCharacterName() {
    return FText::GetEmpty();
}

UPaperSprite* ASBZAICrewState::GetCharacterIcon() const {
    return NULL;
}

void ASBZAICrewState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAICrewState, Character);
    DOREPLIFETIME(ASBZAICrewState, DefeatState);
    DOREPLIFETIME(ASBZAICrewState, bIsMaskOn);
}


