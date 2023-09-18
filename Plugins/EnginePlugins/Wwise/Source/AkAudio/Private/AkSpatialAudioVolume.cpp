#include "AkSpatialAudioVolume.h"
#include "AkLateReverbComponent.h"
#include "AkRoomComponent.h"
#include "AkSurfaceReflectorSetComponent.h"
#include "Components/BrushComponent.h"

AAkSpatialAudioVolume::AAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceReflectorSet = CreateDefaultSubobject<UAkSurfaceReflectorSetComponent>(TEXT("SurfaceReflector"));
    FProperty* p_BrushComponent_Parent = GetClass()->FindPropertyByName("BrushComponent");
    this->SurfaceReflectorSet->SetupAttachment(*p_BrushComponent_Parent->ContainerPtrToValuePtr<UBrushComponent*>(this));
    this->LateReverb = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("LateReverb"));
    this->LateReverb->SetupAttachment(*p_BrushComponent_Parent->ContainerPtrToValuePtr<UBrushComponent*>(this));
    this->Room = CreateDefaultSubobject<UAkRoomComponent>(TEXT("Room"));
    this->Room->SetupAttachment(*p_BrushComponent_Parent->ContainerPtrToValuePtr<UBrushComponent*>(this));
    this->bColored = true;
}


