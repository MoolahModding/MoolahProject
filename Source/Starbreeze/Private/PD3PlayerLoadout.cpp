#include "PD3PlayerLoadout.h"

FPD3PlayerLoadout::FPD3PlayerLoadout() {
    this->GloveData = NULL;
    this->ArmorData = NULL;
    this->PendingValidationCount = 0;
    this->bIsSkillArrayValidated = false;
    this->bIsOverskillArrayValidated = false;
    this->AbilityData = NULL;
}

