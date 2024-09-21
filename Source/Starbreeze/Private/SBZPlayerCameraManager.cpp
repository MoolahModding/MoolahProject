#include "SBZPlayerCameraManager.h"
#include "SBZAudioRaycasting.h"
#include "SBZPlayerCameraFeedbackComponent.h"

ASBZPlayerCameraManager::ASBZPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->PlayerCameraFeedbackComponent = CreateDefaultSubobject<USBZPlayerCameraFeedbackComponent>(TEXT("PlayerCameraFeedbackComponent"));
    this->DepthOfFieldFstop = 4.00f;
    this->DepthOfFieldFocalDistance = 0.00f;
    this->DepthOfFieldDepthBlurAmount = 1.00f;
    this->DepthOfFieldDepthBlurRadius = 0.00f;
    this->TopPassDepthOfFieldFstop = 4.00f;
    this->TopPassDepthOfFieldFocalDistance = 100.00f;
    this->TopPassDepthOfFieldDepthBlurAmount = 1.00f;
    this->TopPassDepthOfFieldDepthBlurRadius = 0.00f;
    this->MotionBlurAmount = 0.50f;
    this->MotionBlurMax = 5.00f;
    this->MotionBlurTargetFPS = 30;
    this->MotionBlurPerObjectSize = 0.50f;
    this->ClampCameraModifier = NULL;
    this->LensEffectParent = NULL;
    this->ActiveCameraViewRestrictionId = -1;
    this->ForwardTraceLength = 10000.00f;
    this->bUseDynFocalDistanceWhenUnequipped = true;
    this->AudioRaycasting = CreateDefaultSubobject<USBZAudioRaycasting>(TEXT("SBZAudioRaycasting"));
}

void ASBZPlayerCameraManager::UnlockCamera(int32& InOutId) {
}

UNiagaraComponent* ASBZPlayerCameraManager::SpawnLensParticleEffect(UNiagaraSystem* ParticleSystem, float LifeTime) {
    return NULL;
}

void ASBZPlayerCameraManager::SetCameraLockedReferenceRotation(const FRotator& InLockedRotation) {
}

void ASBZPlayerCameraManager::RemoveCameraViewRestriction(FSBZCameraViewRestriction& RestrictionSettings) {
}

int32 ASBZPlayerCameraManager::LockCamera(const FSBZLockCameraData& Data) {
    return 0;
}

bool ASBZPlayerCameraManager::IsCameraLocked() const {
    return false;
}

void ASBZPlayerCameraManager::AddOrUpdateCameraViewRestriction(FSBZCameraViewRestriction& RestrictionSettings) {
}


