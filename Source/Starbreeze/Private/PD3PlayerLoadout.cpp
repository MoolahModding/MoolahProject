#include "PD3PlayerLoadout.h"

FPD3PlayerLoadout::FPD3PlayerLoadout() {
    this->MaskData = NULL;
    this->SuitData = NULL;
    this->GloveData = NULL;
    this->ArmorData = NULL;
    this->PendingValidationCount = 0;
    this->bIsSkillArrayValidated = false;
    this->AbilityData = NULL;
}

