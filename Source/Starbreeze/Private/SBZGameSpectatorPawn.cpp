#include "SBZGameSpectatorPawn.h"
#include "Camera/CameraComponent.h"
#include "SBZSpringArmComponent.h"

ASBZGameSpectatorPawn::ASBZGameSpectatorPawn() {
    this->SpringArm = CreateDefaultSubobject<USBZSpringArmComponent>(TEXT("SpringArm"));
    this->SpectateCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("SpectateCamera"));
    this->ControllerDeadZone = 0.20f;
    this->AttachSocket = TEXT("Neck");
    this->DeadTargetDelay = 4.00f;
    this->SpectateTarget = NULL;
}

