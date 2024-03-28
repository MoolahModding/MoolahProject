#include "SBZEquippable.h"
#include "AkComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

void ASBZEquippable::OnRep_EquippableIndex() {
}

void ASBZEquippable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZEquippable, EquippableIndex);
}

ASBZEquippable::ASBZEquippable() {
    this->LocalDamageFeedback = NULL;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->EquippableIndex = -1;
    this->ModOverrideGripAnimData = NULL;
    this->bIsInventory = true;
    this->EquippableAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("EquippableAkComponent"));
    this->EquippingEvent = NULL;
    this->UnequippingEvent = NULL;
    this->EquippingEventRtpc = NULL;
    this->UnequippingEventRtpc = NULL;
    this->bReplicateRootAttachment = false;
}

