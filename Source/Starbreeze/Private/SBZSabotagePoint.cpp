#include "SBZSabotagePoint.h"
#include "Components/SceneComponent.h"
#include "SBZAIAttractorComponent.h"
#include "SBZInteractableComponent.h"
#include "SBZLifeActionComponent.h"
#include "SBZLifeActionInstance.h"
#include "SBZLifeActionSlot.h"
#include "SBZOutlineComponent.h"

ASBZSabotagePoint::ASBZSabotagePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->MarkerAsset = NULL;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->LifeActionComponent = CreateDefaultSubobject<USBZLifeActionComponent>(TEXT("SBZLifeActionComponent"));
    this->LifeActionInstance = CreateDefaultSubobject<USBZLifeActionInstance>(TEXT("SBZLifeActionInstance"));
    this->LifeActionInstance->SetupAttachment(RootComponent);
    this->LifeActionSlot = CreateDefaultSubobject<USBZLifeActionSlot>(TEXT("SBZLifeActionSlot"));
    this->LifeActionSlot->SetupAttachment(LifeActionInstance);
    this->bIsInteractable = true;
    this->SabotageCooldownTime = 0.00f;
    this->bDesiredEnabledState = false;
    this->MarkerId = -1;
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

bool ASBZSabotagePoint::SetEnabled(bool bEnabled) {
    return false;
}

void ASBZSabotagePoint::OnServerCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZSabotagePoint::OnInteractionStateChanged(const USBZBaseInteractableComponent* Interactable, bool bNewState) {
}

void ASBZSabotagePoint::BroadcastOnSabotaged(bool bIsSabotaged) {
}


