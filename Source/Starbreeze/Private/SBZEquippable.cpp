#include "SBZEquippable.h"
#include "AkComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

ASBZEquippable::ASBZEquippable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LocalDamageFeedback = NULL;
    this->LocalDamageFeedback = NULL;
    this->Mesh = CreateDefaultSubobject<UMeshComponent>(TEXT("Mesh"));
    this->EquippableIndex = -1;
    this->ModOverrideGripAnimData = NULL;
    this->bIsInventory = true;
    this->EquippableAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("EquippableAkComponent"));
    this->EquippableAkComponent->SetupAttachment(Mesh);
    this->EquippingEvent = NULL;
    this->UnequippingEvent = NULL;
    this->EquippingEventRtpc = NULL;
    this->UnequippingEventRtpc = NULL;
    this->bReplicateRootAttachment = false;
    this->RootComponent = Mesh;
}

void ASBZEquippable::OnRep_EquippableIndex() {
}

void ASBZEquippable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZEquippable, EquippableIndex);
}


