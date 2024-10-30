#include "SBZLocalPlayerFeedback.h"

USBZLocalPlayerFeedback::USBZLocalPlayerFeedback() {
    this->bUseFirstPlayModifier = false;
    this->FirstPlayCooldown = 10.00f;
    this->PostProcessSettings = NULL;
    this->Intensity = 1.00f;
    this->bLoopingCurve = false;
    this->SustainTime = 0.00f;
    this->bAutoFadeOut = false;
    this->ParticleSystem = NULL;
    this->ParticleLifeTime = 0.00f;
    this->CameraShakeClass = NULL;
    this->CameraShakeScale = 1.00f;
    this->CameraShakeScaleFirstPlay = 1.00f;
    this->FieldOfViewAngle = 0.00f;
    this->TopPassFieldOfViewAngle = 0.00f;
    this->FieldOfViewOverridenAngle = 0.00f;
    this->HandRigModifier = 1.00f;
    this->bIsCameraLocked = false;
    this->AkStartEvent = NULL;
    this->AkStopEvent = NULL;
    this->AkStopEventTime = 0.00f;
    this->ForceFeedbackEffect = NULL;
    this->ChromaEffect = NULL;
    this->AudioRTPCValue = 100.00f;
    this->Priority = -1;
    this->OverridenFOVPriority = -1;
    this->bRemoveAtEndOfActionPhase = true;
    this->CameraOwner = NULL;
    this->LensParticleComponent = NULL;
    this->CameraShake = NULL;
    this->AkComponent = NULL;
    this->TransformCameraModifier = NULL;
}


