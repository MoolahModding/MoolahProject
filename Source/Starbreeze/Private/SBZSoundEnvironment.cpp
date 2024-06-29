#include "SBZSoundEnvironment.h"
#include "AkComponent.h"
#include "AkLateReverbComponent.h"
#include "AkRoomComponent.h"
#include "Components/BrushComponent.h"

ASBZSoundEnvironment::ASBZSoundEnvironment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBrushComponent>(TEXT("BrushComponent0"))) {
    this->LateReverbComponent = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("AkLateReverbComponent"));
    this->RoomComponent = CreateDefaultSubobject<UAkRoomComponent>(TEXT("UAkRoomComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->SoundEnvironmentManager = NULL;
    this->bDebugEnabled = false;
    this->DebugTimer = 5.00f;
    this->LateReverbComponent->SetupAttachment(RootComponent);
    this->RoomComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
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


