#include "SBZRangedWeapon.h"

ASBZRangedWeapon::ASBZRangedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FireEffect = NULL;
    this->FireEmitterMesh = NULL;
    this->FireEffectSocket = TEXT("L_Fire");
    this->FireEffectComponent = NULL;
    this->ShellEffect = NULL;
    this->ShellEffectSocket = TEXT("L_Shell");
    this->bIsRecoilShellEffect = true;
    this->ShellEffectComponent = NULL;
    this->TraceEffect = NULL;
    this->TraceEffectLength = 500.00f;
    this->ShotsBeforeAutoFire = 2;
    this->SingleFireEvent = NULL;
    this->AutoFireStartEvent = NULL;
    this->AutoFireStopEvent = NULL;
    this->FPEnterTargetingEvent = NULL;
    this->FPExitTargetingEvent = NULL;
    this->DryFireEvent = NULL;
}


