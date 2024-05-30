#include "SBZDrillEx.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIAttractorComponent.h"
#include "SBZInteractableComponent.h"
#include "SBZOutlineComponent.h"

ASBZDrillEx::ASBZDrillEx(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Duration = 60.00f;
    this->TransitionProgressMultiplier = 1.00f;
    this->TransitionHeatAddition = 0.00f;
    this->CooldownPerSec = 0.10f;
    this->bRandomMaterial = false;
    this->UnjamInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("UnjamInteraction"));
    this->FixTransitionInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("FixTransitionInteraction"));
    this->AdjustSpeedInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("AdjustSpeedInteraction"));
    this->ToggleOnOffInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("ToggleToggleOnOffInteraction"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("OutlineComponent"));
    this->OutlineAsset = NULL;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
}

bool ASBZDrillEx::UnjamDrill() {
    return false;
}

void ASBZDrillEx::TurnOff() {
}

void ASBZDrillEx::ToggleOnOff() {
}

void ASBZDrillEx::TEMP_SetShowOutline(bool bShow) {
}

bool ASBZDrillEx::StartDrill() {
    return false;
}

void ASBZDrillEx::OnUnjamInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZDrillEx::OnToggleOnOffInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}



void ASBZDrillEx::OnRep_Data(FSBZDrillRepData& Old) {
}


void ASBZDrillEx::OnFixTransitionInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZDrillEx::OnAdjustSpeedInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

bool ASBZDrillEx::NeedsAdjusting() const {
    return false;
}

bool ASBZDrillEx::JamDrill() {
    return false;
}

bool ASBZDrillEx::IsFastSpeed() const {
    return false;
}

float ASBZDrillEx::GetTimeLeft() const {
    return 0.0f;
}

float ASBZDrillEx::GetProgressPerSec() const {
    return 0.0f;
}

float ASBZDrillEx::GetProgressPercent() const {
    return 0.0f;
}

float ASBZDrillEx::GetProgress() const {
    return 0.0f;
}

float ASBZDrillEx::GetHeatPerSec() const {
    return 0.0f;
}

float ASBZDrillEx::GetHeat() const {
    return 0.0f;
}

USBZDrillMaterial* ASBZDrillEx::GetCurrentMaterial() const {
    return NULL;
}

void ASBZDrillEx::AdjustSpeed() {
}

void ASBZDrillEx::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZDrillEx, Data);
}


