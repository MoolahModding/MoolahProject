#include "SBZGameSpectatorPawn.h"
#include "Camera/CameraComponent.h"
#include "SBZSpringArmComponent.h"
#include "Components/SphereComponent.h"

ASBZGameSpectatorPawn::ASBZGameSpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpringArm = CreateDefaultSubobject<USBZSpringArmComponent>(TEXT("SpringArm"));
    FProperty* p_CollisionComponent_Parent = GetClass()->FindPropertyByName("CollisionComponent");
    this->SpringArm->SetupAttachment(*p_CollisionComponent_Parent->ContainerPtrToValuePtr<USphereComponent*>(this));
    this->SpectateCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("SpectateCamera"));
    this->SpectateCamera->SetupAttachment(SpringArm);
    this->ControllerDeadZone = 0.20f;
    this->AttachSocket = TEXT("Neck");
    this->DeadTargetDelay = 4.00f;
    this->SpectateTarget = NULL;
}


