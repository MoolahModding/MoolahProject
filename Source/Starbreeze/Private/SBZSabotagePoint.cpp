#include "SBZSabotagePoint.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIAttractorComponent.h"
#include "SBZInteractableComponent.h"
#include "SBZLifeActionComponent.h"
#include "SBZLifeActionInstance.h"
#include "SBZLifeActionSlot.h"
#include "SBZOutlineComponent.h"

ASBZSabotagePoint::ASBZSabotagePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->MarkerAsset = NULL;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->LifeActionComponent = CreateDefaultSubobject<USBZLifeActionComponent>(TEXT("SBZLifeActionComponent"));
    this->LifeActionInstance = CreateDefaultSubobject<USBZLifeActionInstance>(TEXT("SBZLifeActionInstance"));
    this->LifeActionSlot = CreateDefaultSubobject<USBZLifeActionSlot>(TEXT("SBZLifeActionSlot"));
    this->bIsReplicatingForCosmetics = false;
    this->bIsInteractable = true;
    this->SabotageCooldownTime = 0.00f;
    this->bDesiredEnabledState = false;
    this->MarkerId = -1;
    this->CurrentState = ESBZSabotagePointState::Disabled;
    this->LifeActionInstance->SetupAttachment(RootComponent);
    this->LifeActionSlot->SetupAttachment(LifeActionInstance);
}

bool ASBZSabotagePoint::SetEnabled(bool bEnabled) {
    return false;
}

void ASBZSabotagePoint::OnServerCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZSabotagePoint::OnRep_CurrentState() {
}

void ASBZSabotagePoint::OnInteractionStateChanged(const USBZBaseInteractableComponent* Interactable, bool bNewState) {
}

void ASBZSabotagePoint::Multicast_SetState_Implementation(ESBZSabotagePointState NewState) {
}

void ASBZSabotagePoint::BroadcastOnSabotaged(bool bIsSabotaged) {
}


void ASBZSabotagePoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZSabotagePoint, CurrentState);
}


