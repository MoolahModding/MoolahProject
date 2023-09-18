#include "AkSpatialAudioVolume.h"
#include "AkLateReverbComponent.h"
#include "AkRoomComponent.h"
#include "AkSurfaceReflectorSetComponent.h"

AAkSpatialAudioVolume::AAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceReflectorSet = CreateDefaultSubobject<UAkSurfaceReflectorSetComponent>(TEXT("SurfaceReflector"));
    FProperty* p_BrushComponent_Parent = GetClass()->FindPropertyByName("BrushComponent");
    this->SurfaceReflectorSet->SetupAttachment(p_BrushComponent_Parent->ContainerPtrToValuePtr<BrushComponent>(this));
    this->LateReverb = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("LateReverb"));
    FProperty* p_BrushComponent_Parent = GetClass()->FindPropertyByName("BrushComponent");
    this->LateReverb->SetupAttachment(p_BrushComponent_Parent->ContainerPtrToValuePtr<BrushComponent>(this));
    this->Room = CreateDefaultSubobject<UAkRoomComponent>(TEXT("Room"));
    FProperty* p_BrushComponent_Parent = GetClass()->FindPropertyByName("BrushComponent");
    this->Room->SetupAttachment(p_BrushComponent_Parent->ContainerPtrToValuePtr<BrushComponent>(this));
    this->bColored = true;
}


