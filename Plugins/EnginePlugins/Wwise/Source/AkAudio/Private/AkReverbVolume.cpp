#include "AkReverbVolume.h"
#include "AkLateReverbComponent.h"

AAkReverbVolume::AAkReverbVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->AuxBus = NULL;
    this->SendLevel = 1.00f;
    this->FadeRate = 0.50f;
    this->Priority = 1.00f;
    this->LateReverbComponent = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("LateReverb"));
    FProperty* p_BrushComponent_Parent = GetClass()->FindPropertyByName("BrushComponent");
    this->LateReverbComponent->SetupAttachment(p_BrushComponent_Parent->ContainerPtrToValuePtr<BrushComponent>(this));
    this->bColored = true;
}


