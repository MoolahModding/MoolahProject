#include "SBZSoundEnvironment.h"
#include "AkComponent.h"
#include "AkLateReverbComponent.h"
#include "AkRoomComponent.h"
#include "Components/BrushComponent.h"

ASBZSoundEnvironment::ASBZSoundEnvironment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBrushComponent>(TEXT("BrushComponent0"))) {
    this->LateReverbComponent = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("AkLateReverbComponent"));
    FProperty* p_BrushComponentPointer_Parent = GetClass()->FindPropertyByName("BrushComponentPointer");
    this->LateReverbComponent->SetupAttachment(*p_BrushComponentPointer_Parent->ContainerPtrToValuePtr<UBrushComponent*>(this));
    this->RoomComponent = CreateDefaultSubobject<UAkRoomComponent>(TEXT("UAkRoomComponent"));
    this->RoomComponent->SetupAttachment(*p_BrushComponentPointer_Parent->ContainerPtrToValuePtr<UBrushComponent*>(this));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->AkComponent->SetupAttachment(*p_BrushComponentPointer_Parent->ContainerPtrToValuePtr<UBrushComponent*>(this));
    this->SoundEnvironmentManager = NULL;
    this->bDebugEnabled = false;
    this->DebugTimer = 5.00f;
}

void ASBZSoundEnvironment::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZSoundEnvironment::OnDebugLoggingSoundEnvironment(ASBZSoundEnvironment* TargetEnvironment) {
}

void ASBZSoundEnvironment::OnDebugLoggingPostEvent(UAkAudioEvent* AudioEvent) {
}

void ASBZSoundEnvironment::OnDebugLoggingPortal(ASBZAkAcousticPortal* TargetPortal) {
}

void ASBZSoundEnvironment::Activate() {
}


