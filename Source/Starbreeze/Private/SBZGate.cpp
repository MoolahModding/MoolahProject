#include "SBZGate.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIAttractorComponent.h"

ASBZGate::ASBZGate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialState = ESBZGateState::Closed;
    this->State = ESBZGateState::Closed;
    this->LinkMoveFinishedState = ESBZGateState::Closed;
    this->ServerState = ESBZGateState::Closed;
    this->ExplosionInstigator = NULL;
    this->bIsNavigationLinkCalculated = true;
    this->NavLinkCount = 1;
    this->NavLinkComponentArray.AddDefaulted(1);
    this->bIsOpenForward = true;
    this->bIsOpenBackwardAllowed = true;
    this->bIsOpenFromFrontAllowed = true;
    this->bIsOnlyTraversedWhenAlerted = false;
    this->bIsLinkMoveFinishedStateSet = false;
    this->bIsUnlockingLinkMove = false;
    this->bIsUnlockingLinkMoveCooldown = false;
    this->bIsSliding = false;
    this->UnlockingLinkMoveCooldownDuration = 2.00f;
    this->UnlockingLinkMoveCooldownTime = -1.00f;
    this->SlammedClosedSound = NULL;
    this->SlammedOpenSound = NULL;
    this->OpenSound = NULL;
    this->CloseSound = NULL;
    this->BreachSound = NULL;
    this->UnlockSound = NULL;
    this->PortalObject = NULL;
    this->bUseBreachPOIandSound = false;
    this->ToolSnapData = NULL;
    this->SoundRange = 1500.00f;
    this->SoundRangeSlammedOpen = 1500.00f;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->LeftNavlinkOffset = 75.00f;
    this->RightNavlinkOffset = 75.00f;
    this->ClosedGateSoundReduction = ESBZGateSoundReduction::Medium;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Tags.AddDefaulted(1);
}

void ASBZGate::SetYaw(USceneComponent* Mesh, float InYaw) {
}

bool ASBZGate::SetState(ESBZGateState InState) {
    return false;
}

void ASBZGate::SetAttractorInstigator(APawn* InInstigator) {
}

void ASBZGate::OnStateDone() {
}


void ASBZGate::OnRep_State(ESBZGateState OldState) {
}

void ASBZGate::Multicast_SetState_Implementation(ESBZGateState InState) {
}

void ASBZGate::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

void ASBZGate::Multicast_OnUnlockingLinkMoveStarted_Implementation() {
}

void ASBZGate::Multicast_OnUnlockingLinkMoveEnded_Implementation() {
}

void ASBZGate::Multicast_HandleAgilityTagEvent_Implementation(const FGameplayTag& TagEvent, ASBZAIBaseCharacter* AICharacterInstigator) {
}

bool ASBZGate::IsOpenForwardFromLocation(const FVector& Location) const {
    return false;
}

bool ASBZGate::IsOpenForwardFromDirection(const FVector& Direction) const {
    return false;
}

ASBZAkAcousticPortal* ASBZGate::GetPortalObject() const {
    return NULL;
}

void ASBZGate::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZGate, State);
}


