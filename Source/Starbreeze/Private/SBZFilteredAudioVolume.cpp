#include "SBZFilteredAudioVolume.h"
#include "AkComponent.h"
#include "SBZActorFilterComponent.h"
#include "Components/BrushComponent.h"

ASBZFilteredAudioVolume::ASBZFilteredAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorFilterComponent = CreateDefaultSubobject<USBZActorFilterComponent>(TEXT("ActorFilterComponent"));
    this->bShouldStartEnabled = true;
    this->CrowdEvent = NULL;
    this->StopEvent = NULL;
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    FProperty* p_BrushComponent_Parent = GetClass()->FindPropertyByName("BrushComponent");
    this->AudioComponent->SetupAttachment(*p_BrushComponent_Parent->ContainerPtrToValuePtr<UBrushComponent*>(this));
    this->RTPC = NULL;
    this->Intensity = 0.00f;
    this->InterPolationTimerMs = 200;
    this->Crowd25 = 2;
    this->Crowd50 = 5;
    this->Crowd75 = 8;
    this->Crowd100 = 10;
    this->CrowdCurrent = 0;
}

void ASBZFilteredAudioVolume::SetVolumeEnabled(bool bEnabled) {
}

void ASBZFilteredAudioVolume::OnLevelLoud() {
}

void ASBZFilteredAudioVolume::OnFilteredActorEndOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors) {
}

void ASBZFilteredAudioVolume::OnFilteredActorBeginOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors) {
}

void ASBZFilteredAudioVolume::OnCrowdLevelChange() {
}

void ASBZFilteredAudioVolume::OnCivilianDeath(AActor* OtherActor) {
}


