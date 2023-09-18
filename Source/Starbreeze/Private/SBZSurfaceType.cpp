#include "SBZSurfaceType.h"

FSBZSurfaceType::FSBZSurfaceType() {
    this->AISoundSurfaceType = ESBZAISoundSurfaceTypes::Dampened;
    this->ProjectileImpactConfig = NULL;
    this->ThrowableProjectileImpactConfig = NULL;
    this->MeleeImpactConfig = NULL;
    this->ExplosionImpactConfig = NULL;
    this->FootstepImpactConfig = NULL;
    this->SlidingImpactConfig = NULL;
    this->MantlingImpactConfig = NULL;
    this->StepUpImpactConfig = NULL;
    this->ObjectImpactConfig = NULL;
    this->DebrisImpactConfig = NULL;
    this->ThrowableImpactConfig = NULL;
    this->BagItemImpactConfig = NULL;
    this->BloodSplatterImpactConfig = NULL;
}

