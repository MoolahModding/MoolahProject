#include "SBZHurtReactionLookup.h"

FSBZHurtReactionLookup::FSBZHurtReactionLookup() {
    this->Montage = NULL;
    this->Weight = ESBZDamageWeight::Flinch;
    this->Pose = ESBZHurtReactionPose::Standing;
    this->Direction = ESBZHurtReactionDirection::Forward;
}

