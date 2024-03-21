#include "SBZModularMeshData.h"

FSBZModularMeshData::FSBZModularMeshData() {
    this->SkeletalMeshClass = NULL;
    this->SpawnSlot = NULL;
    this->SpawnStep = ESBZModularMeshSpawnStep::Default;
    this->bModifiesBaseMesh = false;
    this->bNotAnimatedPart = false;
    this->bVisibilityTagState = false;
    this->ParentSlot = NULL;
    this->ParentPart = NULL;
}

