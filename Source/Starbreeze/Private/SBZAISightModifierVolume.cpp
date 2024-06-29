#include "SBZAISightModifierVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ASBZAISightModifierVolume::ASBZAISightModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->VolumeBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->StealthSightModifier = 1.00f;
    this->LoudSightModifier = 1.00f;
    this->bIsActive = false;
    this->VolumeBox->SetupAttachment(RootComponent);
}

void ASBZAISightModifierVolume::SetSightModifierVolumeActive(bool bSetActive) {
}

void ASBZAISightModifierVolume::OnRep_IsActive() {
}


void ASBZAISightModifierVolume::Multicast_OnEffectActivated_Implementation(bool bSetActive) {
}

void ASBZAISightModifierVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAISightModifierVolume, bIsActive);
}


