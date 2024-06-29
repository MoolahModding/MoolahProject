#include "SBZFilteredAudioVolume.h"
#include "AkComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZActorFilterComponent.h"

ASBZFilteredAudioVolume::ASBZFilteredAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CrowdEvent = NULL;
    this->StopEvent = NULL;
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->RTPC = NULL;
    this->Intensity = 0;
    this->bIsStoppedWhenLoud = true;
    this->InterPolationTimerMs = 200;
    this->Crowd25 = 2;
    this->Crowd50 = 5;
    this->Crowd75 = 8;
    this->Crowd100 = 10;
    this->CrowdCurrent = 0;
    this->ActorFilterComponent = CreateDefaultSubobject<USBZActorFilterComponent>(TEXT("ActorFilterComponent"));
    this->bShouldStartEnabled = true;
    this->AudioComponent->SetupAttachment(RootComponent);
}

void ASBZFilteredAudioVolume::SetEnabled(bool bIsEnabled) {
}

void ASBZFilteredAudioVolume::OnRep_Intensity(uint8 OldIntensity) {
}

void ASBZFilteredAudioVolume::OnOverlapActorsChanged(FName Identifier, AActor* Actor, int32 CurrentTotalActors) {
}

void ASBZFilteredAudioVolume::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void ASBZFilteredAudioVolume::Multicast_SetIntensity_Implementation(uint8 NewIntensity) {
}

void ASBZFilteredAudioVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZFilteredAudioVolume, Intensity);
}


