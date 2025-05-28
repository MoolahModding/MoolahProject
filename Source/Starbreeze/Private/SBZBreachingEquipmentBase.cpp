#include "SBZBreachingEquipmentBase.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIAttractorComponent.h"
#include "SBZLifeActionComponent.h"
#include "SBZLifeActionInstance.h"
#include "SBZLifeActionSlot.h"
#include "SBZOutlineComponent.h"

ASBZBreachingEquipmentBase::ASBZBreachingEquipmentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Tags.AddDefaulted(1);
    this->DurationTimeSeconds = 200.00f;
    this->bCanEverBeSabotaged = true;
    this->OutlineAsset = NULL;
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->CurrentEquipmentState = ESBZBreachingEquipmentState::NotAssembled;
    this->EstimatedDurationLeft = 0.00f;
    this->UpdateEstimatedTimeInterval = 1.00f;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->LifeActionComponent = CreateDefaultSubobject<USBZLifeActionComponent>(TEXT("SBZLifeActionComponent"));
    this->LifeActionInstance = CreateDefaultSubobject<USBZLifeActionInstance>(TEXT("SBZLifeActionInstance"));
    this->LifeActionSlot = CreateDefaultSubobject<USBZLifeActionSlot>(TEXT("SBZLifeActionSlot"));
    this->InteractionMarkerAsset = NULL;
    this->FixMarkerAsset = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->DrillingEvent = NULL;
    this->JammedEvent = NULL;
    this->HeatingUpEvent = NULL;
    this->DoneEvent = NULL;
    this->LifeActionInstance->SetupAttachment(RootComponent);
    this->LifeActionSlot->SetupAttachment(LifeActionInstance);
    this->AkComponent->SetupAttachment(RootComponent);
}

void ASBZBreachingEquipmentBase::UpdateMarker(USBZMarkerDataAsset* MarkerAsset, const FVector MarkerLocation) {
}

void ASBZBreachingEquipmentBase::SetState(ESBZBreachingEquipmentState NewState, bool bDoCosmetics) {
}

void ASBZBreachingEquipmentBase::OnRep_CurrentState(ESBZBreachingEquipmentState OldState) {
}

void ASBZBreachingEquipmentBase::Multicast_SetState_Implementation(ESBZBreachingEquipmentState NewState) {
}

void ASBZBreachingEquipmentBase::Multicast_SetEstimatedDurationLeft_Implementation(float InDurationLeft) {
}

float ASBZBreachingEquipmentBase::GetProgressMade() const {
    return 0.0f;
}

ESBZBreachingEquipmentState ASBZBreachingEquipmentBase::GetCurrentState() const {
    return ESBZBreachingEquipmentState::HeatingUp;
}


void ASBZBreachingEquipmentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZBreachingEquipmentBase, CurrentEquipmentState);
    DOREPLIFETIME(ASBZBreachingEquipmentBase, EstimatedDurationLeft);
}


